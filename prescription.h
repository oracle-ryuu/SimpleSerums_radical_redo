#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include <QDialog>
#include "fordatabase.h"

namespace Ui {
class prescription;
}

class prescription : public QDialog
{
    Q_OBJECT

public:
    explicit prescription(QWidget *parent = 0);
    ~prescription();
    dataffff db;
    QString appointment,ssn;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::prescription *ui;
};

#endif // PRESCRIPTION_H
