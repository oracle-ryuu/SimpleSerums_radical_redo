#include "editstaff2.h"
#include "ui_editstaff2.h"
#include <QMessageBox>

editstaff2::editstaff2(QWidget *parent,QString ID) :
    QDialog(parent),
    ui(new Ui::editstaff2)
{
    ui->setupUi(this);
    db.connOpen();
    //SEARCH WITH SQL
    QSqlQuery qry;
    QString login,password,name,title,address,phone;
    qry.prepare("select s_login, s_password, s_name, s_title, s_address, s_phone"
                " from STAFF where s_ssn=:s_ssn ");
    qry.bindValue(":s_ssn", ID);
    if(qry.exec()){
        if(qry.next()){
            login = qry.value(0).toString();
            password = qry.value(1).toString();
            name = qry.value(2).toString();
            title = qry.value(3).toString();
            address = qry.value(4).toString();
            phone = qry.value(5).toString();

            //populate fields with existing information
            ui->lineEdit_user->setText(login);
            ui->lineEdit_password->setText(password);
            ui->lineEdit_name->setText(name);
            ui->lineEdit_title->setText(title);
            ui->lineEdit_address->setText(address);
            ui->lineEdit_phone->setText(phone);
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Staff Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}

editstaff2::~editstaff2()
{
    delete ui;
    db.connClose();
}

void editstaff2::on_buttonBox_accepted()
{
    QString login,password,name,title,address,phone;
    login = ui->lineEdit_user->text();
    password = ui->lineEdit_password->text();
    name = ui->lineEdit_name->text();
    title = ui->lineEdit_title->text();
    address = ui->lineEdit_address->text();
    phone = ui->lineEdit_phone->text();

    //remove patient
    QSqlQuery qry;
    qry.prepare("delete from STAFF where s_ssn=:s_ssn ");
    qry.bindValue(":s_ssn", id);
    if(qry.exec()){
        if(qry.numRowsAffected()>0){
            //QMessageBox::critical(this,tr("Delete"),tr("Staff Deleted"));
        }
        else{
            QMessageBox::critical(this,tr("Delete"),tr("Staff does not exist\nCould not delete..."));
        }

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

    //re add staff

    QSqlQuery qry2;
    qry2.prepare("insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)"
                "values (:ssn , :user , :password , :name , :title , :address , :phone )");
    qry2.bindValue(":ssn",id);
    qry2.bindValue(":user", login);
    qry2.bindValue(":password",password);
    qry2.bindValue(":address",address);
    qry2.bindValue(":name", name);
    qry2.bindValue(":title", title);
    qry2.bindValue(":phone", phone);

    if(qry2.exec()){
        QMessageBox::information(this,"Save","Staff saved");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry2.lastError().text());
    }

}
