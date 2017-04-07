#ifndef SEARCHPATIENT_H
#define SEARCHPATIENT_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class searchpatient;
}

class searchpatient : public QDialog
{
    Q_OBJECT

public:
    explicit searchpatient(QWidget *parent = 0);
    ~searchpatient();
    dataffff db;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::searchpatient *ui;
};

#endif // SEARCHPATIENT_H
