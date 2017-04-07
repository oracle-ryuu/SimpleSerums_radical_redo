#include "removepatient.h"
#include "ui_removepatient.h"
#include <QString>
#include <QMessageBox>

removepatient::removepatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removepatient)
{
    ui->setupUi(this);
    db.connOpen();
}

removepatient::~removepatient()
{
    delete ui;
    db.connClose();
}

void removepatient::on_ok_clicked()
{
    QString ID = ui->ID->text();
    QSqlQuery qry;
    qry.prepare("delete from PATIENT where p_ssn=:p_ssn ");
    qry.bindValue(":p_ssn",ID);
    if(qry.exec()){
        if(qry.numRowsAffected()>0){
            QMessageBox::critical(this,tr("Delete"),tr("Patient Deleted"));
        }
        else{
            QMessageBox::critical(this,tr("Delete"),tr("Patient does not exist\nCould not delete..."));
        }

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

void removepatient::on_pushButton_clicked()
{
    this->hide();
}
