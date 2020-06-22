#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_OpenSerialPort_clicked();

    void on_SerialSend_clicked();

    void on_pushButton_clicked();

    void on_stopRotate_clicked();

    void on_serialMute_clicked();

    void on_serialSpeedDown_clicked();

    void on_serialSpeedUp_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
