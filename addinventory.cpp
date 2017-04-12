#include "addinventory.h"
#include "ui_addinventory.h"
#include <QString>
#include <QMessageBox>


addInventory::addInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addInventory)
{
    ui->setupUi(this);
    db.connOpen();
}

addInventory::~addInventory()
{
    delete ui;
    db.connClose();
}

void addInventory::on_pushButton_clicked()
{
    QString item_id = ui->lineEdit->text();
    QString item_name = ui->lineEdit_2->text();
    QString item_quantity = ui->lineEdit_3->text();

    //CHECK VALIDITY OF INPUT




    //ADD INTO DATABASE WITH SQL
    QSqlQuery qry;
    qry.prepare("insert into ITEM(i_id, i_name, i_count)"
                "values (:i_id ,:i_name ,:i_count )");
    qry.bindValue(":i_id", item_id);
    qry.bindValue(":i_name", item_name);
    qry.bindValue(":i_count", item_quantity);

    if(qry.exec()){
        QMessageBox::information(this,tr("Save"),tr("Item saved"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }





}

void addInventory::on_pushButton_2_clicked()
{
    this->hide();
}
