#include "prescription.h"
#include "ui_prescription.h"
#include <QMessageBox>

prescription::prescription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prescription)
{
    ui->setupUi(this);
    db.connOpen();
}

prescription::~prescription()
{
    delete ui;
    db.connClose();
}

void prescription::on_buttonBox_accepted()
{
    QString id,quantity;
    id = ui->lineEdit_id->text();
    quantity = ui->lineEdit_2->text();

    QSqlQuery qry;
    qry.prepare("insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)"
                "values (:patient , :item , :appoint , :amount )");
    qry.bindValue(":patient", ssn);
    qry.bindValue(":item", id);
    qry.bindValue(":appoint", appointment);
    qry.bindValue(":amount",quantity);
    if(qry.exec()){
        QMessageBox::information(this,tr("Save"),tr("Prescription saved"));
        this->hide();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
