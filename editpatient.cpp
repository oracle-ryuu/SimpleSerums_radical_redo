#include "editpatient.h"
#include "ui_editpatient.h"
#include "editpatient2.h"
#include "ui_editpatient2.h"
#include <QMessageBox>

editpatient::editpatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editpatient)
{
    ui->setupUi(this);
    db.connOpen();
}

editpatient::~editpatient()
{
    delete ui;
}


void editpatient::on_pushButton_2_clicked()
{
    QString ID = ui->ID->text();
    //SEARCH WITH SQL
    QString name,DOB,address,sex,phone,insurance,insuranceNum,doctor; //output qstrings
    QSqlQuery qry;
    qry.prepare("select p_name,p_dob,p_address,p_sex,p_phone,p_insurance,p_insurance_num,s_name"
                " from PATIENT,STAFF where p_ssn=:p_ssn and p_doctor=s_ssn");
    qry.bindValue(":p_ssn", ID);
    if(qry.exec()){
        if(qry.next()){
            name = qry.value(0).toString();
            DOB = qry.value(1).toString();
            address = qry.value(2).toString();
            sex = qry.value(3).toString();
            phone = qry.value(4).toString();
            insurance = qry.value(5).toString();
            insuranceNum = qry.value(6).toString();
            doctor = qry.value(7).toString();

            db.connClose();
            editpatient2 *edit = new editpatient2(this, ID);
            edit->ID = ID;
            edit->show();
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

void editpatient::on_pushButton_clicked()
{
    this->hide();
}
