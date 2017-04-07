#ifndef ADDINVENTORY_H
#define ADDINVENTORY_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"
namespace Ui {
class addInventory;
}

class addInventory : public QDialog
{
    Q_OBJECT

public:
    explicit addInventory(QWidget *parent = 0);
    ~addInventory();
    dataffff db;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addInventory *ui;
};

#endif // ADDINVENTORY_H
