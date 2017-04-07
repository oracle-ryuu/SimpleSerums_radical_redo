#ifndef REMOVEPATIENT_H
#define REMOVEPATIENT_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class removepatient;
}

class removepatient : public QDialog
{
    Q_OBJECT

public:
    explicit removepatient(QWidget *parent = 0);
    ~removepatient();
    dataffff db;

private slots:
    void on_ok_clicked();

    void on_pushButton_clicked();

private:
    Ui::removepatient *ui;


};

#endif // REMOVEPATIENT_H
