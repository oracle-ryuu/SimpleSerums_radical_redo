#include "searchinventory.h"
#include "ui_searchinventory.h"
#include <QString>
#include <QMessageBox>


searchInventory::searchInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchInventory)
{
    ui->setupUi(this);
    db.connOpen();
}

searchInventory::~searchInventory()
{
    delete ui;
    db.connClose();
}

void searchInventory::on_pushButton_clicked()
{
    QString ID = ui->lineEdit->text();
    //SEARCH DATABASE WITH SQL
    QString name,count; //output qstrings
    QSqlQuery qry;
    qry.prepare("select i_name,i_count from ITEM where i_id=:i_id");
    qry.bindValue(":i_id", ID);
    if(qry.exec()){
        if(qry.next()){
            name = qry.value(0).toString();
            count = qry.value(1).toString();
            QString info = "name: " + name + "\ncount: " + count;
	    QMessageBox::information(this, "Info", info);
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Item Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

void searchInventory::on_pushButton_2_clicked()
{
    this->hide();
}

void searchInventory::on_pushButton_3_clicked()
{
    QString NAME = ui->lineEdit_2->text();
    //SEARCH DATABASE WITH SQL
    QString name,count, ID; //output qstrings
    QSqlQuery qry;
    qry.prepare("select i_name,i_count,i_id from ITEM where i_name=:i_name");
    qry.bindValue(":i_name", NAME);
    if(qry.exec()){
        if(qry.next()){
            name = qry.value(0).toString();
            count = qry.value(1).toString();
            ID = qry.value(2).toString();
            QString info = "name: " + name + "\ncount: " + count + "\nid: " + ID;
        QMessageBox::information(this, "Info", info);
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Item Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
