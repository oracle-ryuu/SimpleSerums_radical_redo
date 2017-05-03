#ifndef ADDSTAFF_H
#define ADDSTAFF_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class addstaff;
}

class addstaff : public QDialog
{
    Q_OBJECT

public:
    explicit addstaff(QWidget *parent = 0);
    ~addstaff();
    dataffff db;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addstaff *ui;
};

#endif // ADDSTAFF_H
