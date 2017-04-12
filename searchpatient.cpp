#include "searchpatient.h"
#include "ui_searchpatient.h"
#include <QString>
#include <QMessageBox>

searchpatient::searchpatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchpatient)
{
    ui->setupUi(this);
    db.connOpen();
}

searchpatient::~searchpatient()
{
    delete ui;
    db.connClose();
}

void searchpatient::on_pushButton_2_clicked()
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
            //CHANGE THIS MESSAGE BOX
            QString info = "Patient Name: " + name;
                    info+= "\nDate of Birth: " + DOB;
                    info+= "\nAddress: " + address;
                    info+= "\nSex: " + sex;
                    info+= "\nPhone Number: " + phone;
                    info+= "\nInsurance Provider: " + insurance;
                    info+= "\nInusrance Number: " + insuranceNum;
                    info+= "\nDoctor: " + doctor;

            QMessageBox::information(this, "Info", info);
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}


void searchpatient::on_pushButton_clicked()
{
    this->hide();
}

void searchpatient::on_pushButton_3_clicked()
{
     QString ID = ui->ID->text();

     QSqlQuery qry;
     qry.prepare("select c_appointment,c_description,p_name from CONSULT,PATIENT where c_patient=:ID and p_ssn=:SSN ");
     qry.bindValue(":ID",ID);
     qry.bindValue(":SSN",ID);
     if(qry.exec()){
         if(qry.next()){
            //QMessageBox::information(this,"info","Listing consults...");
            _listconsults = new listconsults(this);
            _listconsults->ID = ID;
            _listconsults->name = qry.value(2).toString();
            _listconsults->show();
         }
         else{
             QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found or no consults for this patient!"));
         }

     }
     else{
         QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
     }
     //gets name

}
