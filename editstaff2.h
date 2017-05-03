#ifndef EDITSTAFF2_H
#define EDITSTAFF2_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class editstaff2;
}

class editstaff2 : public QDialog
{
    Q_OBJECT

public:
    explicit editstaff2(QWidget *parent = 0,QString ID = "");
    ~editstaff2();
    dataffff db;
    QString id;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::editstaff2 *ui;
};

#endif // EDITSTAFF2_H
