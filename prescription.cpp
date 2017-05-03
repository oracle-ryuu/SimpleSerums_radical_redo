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
   this->hide();
}

void prescription::on_pushButton_clicked()
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
        QSqlQuery qry2;
        qry2.prepare("update ITEM set i_count= i_count - :quantity where i_id= :id and i_count > 0");
        qry2.bindValue(":quantity",quantity);
        qry2.bindValue(":id",id);
        if(qry2.exec()){
            QMessageBox::information(this,tr("Update"),tr("Inventory updated!"));
        }
        else{
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        }
        ui->lineEdit_id->clear();
        ui->lineEdit_2->clear();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
