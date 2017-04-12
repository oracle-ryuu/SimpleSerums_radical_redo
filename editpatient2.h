#ifndef EDITPATIENT2_H
#define EDITPATIENT2_H

#include <QDialog>
#include <QString>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class editpatient2;
}

class editpatient2 : public QDialog
{
    Q_OBJECT

public:
    explicit editpatient2(QWidget *parent = 0, QString theID = "");
   // editpatient2(QWidget *parent = 0, QString theID ="");

    ~editpatient2();
    dataffff db;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::editpatient2 *ui;
};

#endif // EDITPATIENT2_H
