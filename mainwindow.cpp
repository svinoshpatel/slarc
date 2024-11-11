#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <QMessageBox>
#include <QTableWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_X->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_A->setColumnWidth(0, ui->tableWidget_A->width() - 10);
    ui->tableWidget_C->setColumnWidth(0, ui->tableWidget_C->width() - 10);
    ui->tableWidget_C->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_valueChanged(int size)
{
    int width = ui->tableWidget_A->width() - 10;
    ui->tableWidget_A->setColumnCount(size);
    ui->tableWidget_A->setRowCount(size);
    ui->tableWidget_C->setColumnCount(size);
    ui->tableWidget_C->setRowCount(size);
    ui->tableWidget_B->setRowCount(size);
    ui->tableWidget_X->setRowCount(size);
    for (int i = 0; i < size; i++) {
        ui->tableWidget_A->setColumnWidth(i, width / size);
    }
    for (int i = 0; i < size; i++) {
        ui->tableWidget_C->setColumnWidth(i, width / size);
    }
}

void MainWindow::on_pushButton_Exit_clicked()
{
    close();
}

void MainWindow::on_pushButton_Clear_clicked()
{
    ui->tableWidget_A->clearContents();
    ui->tableWidget_B->clearContents();
    ui->tableWidget_X->clearContents();
    ui->tableWidget_C->clearContents();
}

bool gauss(double A[6][6], double B[6], int size, double X[6], QTableWidget *tableWidget)
{
    int k;
    double R;
    if (size == 1) {
        if (fabs(A[0][0]) < 1e-7) {
            QMessageBox::information(nullptr, "", "The system is singular");
            return false;
        } else {
            X[0] = B[0] / A[0][0];
            return true;
        }
    }
    for (int i = 0; i < size - 1; i++) {
        k = i;
        R = fabs(A[i][i]);
        // searching for the biggest element in column
        for (int j = i + 1; j < size; j++) {
            if (fabs(A[j][i]) >= R) {
                k = j;
                R = fabs(A[j][i]);
            }
        }
        if (R <= 1e-7) {
            QMessageBox::information(nullptr, "", "The system is singular");
            return false;
        }
        // swap rows
        if (k != i) {
            R = B[k];
            B[k] = B[i];
            B[i] = R;
            for (int j = 0; j < size; j++) {
                R = A[k][j];
                A[k][j] = A[i][j];
                A[i][j] = R;
            }
        }
        // normalize row i
        R = A[i][i];
        B[i] = B[i] / R;
        for (int j = 0; j < size; j++)
            A[i][j] = A[i][j] / R;
        // substract
        for (int k = i + 1; k < size; k++) {
            R = A[k][i];
            B[k] = B[k] - R * B[i];
            A[k][i] = 0;
            for (int j = i + 1; j < size; j++)
                A[k][j] = A[k][j] - R * A[i][j];
        }
    }
    if (fabs(A[size-1][size-1]) <= 1e-7) {
        QMessageBox::information(nullptr, "", "The system is singular");
        return false;
    }
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) {
            QTableWidgetItem *item = new QTableWidgetItem(QString::number(A[i][j]));
            tableWidget->setItem(i, j, item);
        }
    X[size-1] = B[size-1] / A[size-1][size-1];
    for (int i = size - 2; i >= 0; i--) {
        R = B[i];
        for (int j = i + 1; j < size; j++)
            R = R - A[i][j] * X[j];
        X[i] = R;
    }
    return true;
}

void MainWindow::on_pushButton_Solve_clicked()
{
    int size = ui->spinBox->value();
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            A[i][j] = ui->tableWidget_A->item(i, j)->text().toDouble();
    for (int i = 0; i < size; i++)
        B[i] = ui->tableWidget_B->item(i, 0)->text().toDouble();
    if (gauss(A, B, size, X, ui->tableWidget_C) == true) {
        for (int i = 0; i < size; i++) {
            QTableWidgetItem *item = new QTableWidgetItem(QString::number(X[i]));
            ui->tableWidget_X->setItem(i, 0, item);
        }
        QMessageBox::information(nullptr, "", "Solution was found");
    } else {
        for (int i = 0; i < size; i++) {
            QTableWidgetItem *item = new QTableWidgetItem("?");
            ui->tableWidget_X->setItem(i, 0, item);
        }
    }
}

