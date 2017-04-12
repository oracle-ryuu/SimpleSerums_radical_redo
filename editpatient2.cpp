#include "editpatient2.h"
#include "editpatient.h"
#include "ui_editpatient2.h"
#include <QRegExp>
#include <QStringList>
#include <QMessageBox>

editpatient2::editpatient2(QWidget *parent, QString theID) :
    QDialog(parent),
    ui(new Ui::editpatient2)
{
    ui->setupUi(this);
    db.connOpen();
    QString ID = theID;
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

            //populate fields with existing information
            ui->pat_Name_2->setText(name);
            ui->DOB_2->setText(DOB);
            //Split address into components of address, city, state, zip
            /*
            ui->Address_2->setText(_addr);
            ui->City_2->setText(_city);
            ui->State_2->setText(_state);
            ui->Zip_2->setText(_zip);
            */
            ui->Sex_2->setText(sex);
            ui->pat_Phone_2->setText(phone);
            ui->ins_Name_2->setText(insurance);
            ui->ins_Nom_2->setText(insuranceNum);
            ui->doc_ID_2->setText(doctor);

        }
    }

}

editpatient2::~editpatient2()
{
    delete ui;
    db.connClose();
}


void editpatient2::on_pushButton_3_clicked()
{
    QString pat_Name=ui->pat_Name_2->text();
    QString DOB=ui->DOB_2->text();
    QString Address =ui->Address_2->text();
    Address += ", ";
    QString City =ui->City_2->text();
    Address += City;
    Address += ", ";
    QString State =ui->State_2->text();
    Address += State;
    Address += ", ";
    QString Zip =ui->Zip_2->text();
    Address += Zip;
    QString SEX=ui->Sex_2->text();
    QString pat_Phone=ui->pat_Phone_2->text();
    QString ins_Name=ui->ins_Name_2->text();
    QString ins_Nom=ui->ins_Nom_2->text();
    QString doc_ID=ui->doc_ID_2->text();

    QSqlQuery qry;
    //TO DO: save into database
}

void editpatient2::on_pushButton_4_clicked()
{
    this->hide();
}
