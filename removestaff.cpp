#include "removestaff.h"
#include "ui_removestaff.h"
#include <QMessageBox>

removestaff::removestaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removestaff)
{
    ui->setupUi(this);
    db.connOpen();
}

removestaff::~removestaff()
{
    delete ui;
    db.connClose();
}

void removestaff::on_buttonBox_accepted()
{
    QString ID = ui->ID->text();
    QSqlQuery qry;
    qry.prepare("delete from STAFF where s_ssn=:s_ssn ");
    qry.bindValue(":s_ssn", ID);
    if(qry.exec()){
        if(qry.numRowsAffected()>0){
            QMessageBox::critical(this,tr("Delete"),tr("Staff Deleted"));
        }
        else{
            QMessageBox::critical(this,tr("Delete"),tr("Staff does not exist\nCould not delete..."));
        }

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}
