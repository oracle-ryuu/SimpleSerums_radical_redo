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
    qry.prepare("select p_name,p_dob,p_address,p_sex,p_phone,p_insurance,p_insurance_num,p_doctor"
                " from PATIENT where p_ssn=:p_ssn ");
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
            ui->Address_2->setText(address);
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
    QString SEX=ui->Sex_2->text();
    QString pat_Phone=ui->pat_Phone_2->text();
    QString ins_Name=ui->ins_Name_2->text();
    QString ins_Nom=ui->ins_Nom_2->text();
    QString doc_ID=ui->doc_ID_2->text();

    //remove patient
    QSqlQuery qry;
    qry.prepare("delete from PATIENT where p_ssn=:p_ssn ");
    qry.bindValue(":p_ssn", ID);
    if(qry.exec()){
        if(qry.numRowsAffected()>0){
            //QMessageBox::critical(this,tr("Delete"),tr("Patient Deleted"));
        }
        else{
            QMessageBox::critical(this,tr("Delete"),tr("Patient does not exist\nCould not delete..."));
        }

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

    //re add patient
    QSqlQuery qry2;
    qry2.prepare("insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex,"
                "p_phone, p_insurance, p_insurance_num, p_doctor)"
                "values (:p_ssn ,:p_name ,:p_dob , :p_address , :p_sex ,"
                ":p_phone , :p_insurance , :p_insurance_num , :p_doctor )");
    qry2.bindValue(":p_ssn",ID);
    qry2.bindValue(":p_name", pat_Name);
    qry2.bindValue(":p_dob",DOB);
    qry2.bindValue(":p_address",Address);
    qry2.bindValue(":p_sex", SEX);
    qry2.bindValue(":p_phone", pat_Phone);
    qry2.bindValue(":p_insurance",ins_Name);
    qry2.bindValue(":p_insurance_num",ins_Nom);
    qry2.bindValue(":p_doctor",doc_ID);
    if(qry2.exec()){
        QMessageBox::information(this,"Save","Patient edited");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry2.lastError().text());
    }
}

void editpatient2::on_pushButton_4_clicked()
{
    this->hide();
}
