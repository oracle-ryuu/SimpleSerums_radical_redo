#ifndef REMOVEINVENTORY_H
#define REMOVEINVENTORY_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"
namespace Ui {
class removeInventory;
}

class removeInventory : public QDialog
{
    Q_OBJECT

public:
    explicit removeInventory(QWidget *parent = 0);
    ~removeInventory();
    dataffff db;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::removeInventory *ui;
};

#endif // REMOVEINVENTORY_H
