#ifndef CONSULTPRESCRIPT_H
#define CONSULTPRESCRIPT_H

#include <QDialog>
#include "fordatabase.h"
#include "prescription.h"

namespace Ui {
class consultPrescript;
}

class consultPrescript : public QDialog
{
    Q_OBJECT

public:
    explicit consultPrescript(QWidget *parent = 0);
    ~consultPrescript();
    dataffff db;
    QString ssn;

private slots:


    void on_pushButton_clicked();

private:
    Ui::consultPrescript *ui;
    prescription *_prescription;
};

#endif // CONSULTPRESCRIPT_H
