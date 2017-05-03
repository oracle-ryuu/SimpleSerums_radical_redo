#ifndef REMOVESTAFF_H
#define REMOVESTAFF_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class removestaff;
}

class removestaff : public QDialog
{
    Q_OBJECT

public:
    explicit removestaff(QWidget *parent = 0);
    ~removestaff();
    dataffff db;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::removestaff *ui;
};

#endif // REMOVESTAFF_H
