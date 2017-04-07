#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "maindirectory.h"
#include <QtSql>
#include <QFileInfo>
#include "fordatabase.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    dataffff db;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MainDirectory *_maindirectory;
};

#endif // MAINWINDOW_H
