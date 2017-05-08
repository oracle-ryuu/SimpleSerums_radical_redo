#ifndef SEARCHINVENTORY_H
#define SEARCHINVENTORY_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class searchInventory;
}

class searchInventory : public QDialog
{
    Q_OBJECT

public:
    explicit searchInventory(QWidget *parent = 0);
    ~searchInventory();
    dataffff db;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::searchInventory *ui;
};

#endif // SEARCHINVENTORY_H
