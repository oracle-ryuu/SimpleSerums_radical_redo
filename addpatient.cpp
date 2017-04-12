#include "addpatient.h"
#include "ui_addpatient.h"
#include <QString>
#include <QMessageBox>

addPatient::addPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addPatient)
{
    ui->setupUi(this);
    db.connOpen();
}

addPatient::~addPatient()
{
    delete ui;
    db.connClose();
}

void addPatient::on_pushButton_2_clicked()
{
    QString SSN =ui->SSN->text();
    QString pat_Name=ui->pat_Name->text();
    QString DOB=ui->DOB->text();
    QString Address =ui->Address->text();
    QString SEX=ui->Sex->text();
    QString pat_Phone=ui->pat_Phone->text();
    QString ins_Name=ui->ins_Name->text();
    QString ins_Nom=ui->ins_Nom->text();
    QString doc_ID=ui->doc_ID->text();

    QSqlQuery qry;
    qry.prepare("insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex,"
                "p_phone, p_insurance, p_insurance_num, p_doctor)"
                "values (:p_ssn ,:p_name ,:p_dob , :p_address , :p_sex ,"
                ":p_phone , :p_insurance , :p_insurance_num , :p_doctor )");
    qry.bindValue(":p_ssn",SSN);
    qry.bindValue(":p_name", pat_Name);
    qry.bindValue(":p_dob",DOB);
    qry.bindValue(":p_address",Address);
    qry.bindValue(":p_sex", SEX);
    qry.bindValue(":p_phone", pat_Phone);
    qry.bindValue(":p_insurance",ins_Name);
    qry.bindValue(":p_insurance_num",ins_Nom);
    qry.bindValue(":p_doctor",doc_ID);
    if(qry.exec()){
        QMessageBox::information(this,"Save","Patient saved");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

void addPatient::on_pushButton_clicked()
{
    this->hide();
}
