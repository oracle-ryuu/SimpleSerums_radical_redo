#ifndef EDITPATIENT_H
#define EDITPATIENT_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"
#include <QString>
#include "editpatient2.h"

namespace Ui {
class editpatient;
}

class editpatient : public QDialog
{
    Q_OBJECT

public:
    explicit editpatient(QWidget *parent = 0);
    ~editpatient();

    dataffff db;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::editpatient *ui;

};

#endif // EDITPATIENT_H
