#include "removeinventory.h"
#include "ui_removeinventory.h"
#include <QString>
#include <QMessageBox>

removeInventory::removeInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removeInventory)
{
    ui->setupUi(this);
    db.connOpen();
}

removeInventory::~removeInventory()
{
    delete ui;
    db.connClose();
}

void removeInventory::on_pushButton_clicked()
{
    QString item_id = ui->lineEdit->text();
    //SEARCH TO SEE IF IT EXISTS. IF NOT EXIST, PRODUCE "NOT FOUND" DIALOGUE
    //IF EXISTS, REMOVE FROM DATABASE WITH SQL
    QSqlQuery qry;
    qry.prepare("delete from ITEM where i_id=:i_id ");
    qry.bindValue(":i_id",item_id);
    if(qry.exec()){
        if(qry.numRowsAffected()>0){
            QMessageBox::information(this,tr("Delete"),tr("Item Deleted"));
        }
        else{
            QMessageBox::critical(this,tr("Delete"),tr("Item does not exist\nCould not delete..."));
        }

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}

void removeInventory::on_pushButton_2_clicked()
{
    this->hide();
}
