/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget_A;
    QTableWidget *tableWidget_B;
    QTableWidget *tableWidget_X;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_Solve;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_Exit;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLabel *label_5;
    QTableWidget *tableWidget_C;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(751, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget_A = new QTableWidget(centralwidget);
        if (tableWidget_A->columnCount() < 1)
            tableWidget_A->setColumnCount(1);
        if (tableWidget_A->rowCount() < 1)
            tableWidget_A->setRowCount(1);
        tableWidget_A->setObjectName(QString::fromUtf8("tableWidget_A"));
        tableWidget_A->setGeometry(QRect(10, 70, 511, 161));
        tableWidget_A->setRowCount(1);
        tableWidget_A->setColumnCount(1);
        tableWidget_A->horizontalHeader()->setVisible(false);
        tableWidget_A->verticalHeader()->setVisible(false);
        tableWidget_B = new QTableWidget(centralwidget);
        if (tableWidget_B->columnCount() < 1)
            tableWidget_B->setColumnCount(1);
        if (tableWidget_B->rowCount() < 1)
            tableWidget_B->setRowCount(1);
        tableWidget_B->setObjectName(QString::fromUtf8("tableWidget_B"));
        tableWidget_B->setGeometry(QRect(530, 70, 101, 161));
        tableWidget_B->setRowCount(1);
        tableWidget_B->setColumnCount(1);
        tableWidget_B->horizontalHeader()->setVisible(false);
        tableWidget_B->verticalHeader()->setVisible(false);
        tableWidget_X = new QTableWidget(centralwidget);
        if (tableWidget_X->columnCount() < 1)
            tableWidget_X->setColumnCount(1);
        if (tableWidget_X->rowCount() < 1)
            tableWidget_X->setRowCount(1);
        tableWidget_X->setObjectName(QString::fromUtf8("tableWidget_X"));
        tableWidget_X->setGeometry(QRect(640, 70, 101, 161));
        tableWidget_X->setRowCount(1);
        tableWidget_X->setColumnCount(1);
        tableWidget_X->horizontalHeader()->setVisible(false);
        tableWidget_X->verticalHeader()->setVisible(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 50, 58, 18));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 50, 58, 18));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 50, 58, 18));
        pushButton_Solve = new QPushButton(centralwidget);
        pushButton_Solve->setObjectName(QString::fromUtf8("pushButton_Solve"));
        pushButton_Solve->setGeometry(QRect(110, 240, 80, 26));
        QPalette palette;
        QBrush brush(QColor(85, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(84, 169, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        pushButton_Solve->setPalette(palette);
        QFont font;
        font.setBold(true);
        pushButton_Solve->setFont(font);
        pushButton_Clear = new QPushButton(centralwidget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(320, 240, 80, 26));
        QPalette palette1;
        QBrush brush2(QColor(85, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        pushButton_Clear->setPalette(palette1);
        pushButton_Clear->setFont(font);
        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(540, 240, 80, 26));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        pushButton_Exit->setPalette(palette2);
        pushButton_Exit->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 10, 31, 18));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(130, 9, 42, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        spinBox->setPalette(palette3);
        spinBox->setMinimum(1);
        spinBox->setMaximum(5);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 270, 121, 18));
        tableWidget_C = new QTableWidget(centralwidget);
        if (tableWidget_C->columnCount() < 1)
            tableWidget_C->setColumnCount(1);
        if (tableWidget_C->rowCount() < 1)
            tableWidget_C->setRowCount(1);
        tableWidget_C->setObjectName(QString::fromUtf8("tableWidget_C"));
        tableWidget_C->setGeometry(QRect(10, 290, 511, 161));
        tableWidget_C->setRowCount(1);
        tableWidget_C->setColumnCount(1);
        tableWidget_C->horizontalHeader()->setVisible(false);
        tableWidget_C->verticalHeader()->setVisible(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 751, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Matrix A", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vector B", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Vector X", nullptr));
        pushButton_Solve->setText(QCoreApplication::translate("MainWindow", "Solve", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Upper triangular A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
