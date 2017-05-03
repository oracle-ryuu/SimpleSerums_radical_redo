#ifndef EDITSTAFF_H
#define EDITSTAFF_H

#include <QDialog>
#include <QtSql>
#include "fordatabase.h"
#include "editstaff2.h"

namespace Ui {
class editstaff;
}

class editstaff : public QDialog
{
    Q_OBJECT

public:
    explicit editstaff(QWidget *parent = 0);
    ~editstaff();
    dataffff db;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::editstaff *ui;
    editstaff2 *_editstaff2;
};

#endif // EDITSTAFF_H
