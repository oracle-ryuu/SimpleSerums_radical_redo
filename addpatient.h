#ifndef ADDPATIENT_H
#define ADDPATIENT_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"
namespace Ui {
class addPatient;
}

class addPatient : public QDialog
{
    Q_OBJECT

public:
    explicit addPatient(QWidget *parent = 0);
    ~addPatient();
    dataffff db;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::addPatient *ui;
};

#endif // ADDPATIENT_H
