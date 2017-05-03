#include "addstaff.h"
#include "ui_addstaff.h"
#include <QMessageBox>

addstaff::addstaff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addstaff)
{
    ui->setupUi(this);
    db.connOpen();
}

addstaff::~addstaff()
{
    delete ui;
    db.connClose();
}

void addstaff::on_buttonBox_accepted()
{
    QString ssn =ui->lineEdit_ssn->text();
    QString name=ui->lineEdit_name->text();
    QString address =ui->lineEdit_address->text();
    QString user=ui->lineEdit_user->text();
    QString phone=ui->lineEdit_phone->text();
    QString password=ui->lineEdit_password->text();
    QString title=ui->lineEdit_title->text();

    QSqlQuery qry;
    qry.prepare("insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)"
                "values (:ssn , :user , :password , :name , :title , :address , :phone )");
    qry.bindValue(":ssn", ssn);
    qry.bindValue(":user", user);
    qry.bindValue(":password", password);
    qry.bindValue(":address", address);
    qry.bindValue(":name", name);
    qry.bindValue(":title", title);
    qry.bindValue(":phone", phone);

    if(qry.exec()){
        QMessageBox::information(this,"Save","Staff saved");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
