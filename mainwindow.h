#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_spinBox_valueChanged(int size);

    void on_pushButton_Exit_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_Solve_clicked();

private:
    Ui::MainWindow *ui;
    double eps = 0.00001;
    double R = 0;
    double A[6][6];
    double B[6];
    double X[6];
};
#endif // MAINWINDOW_H
