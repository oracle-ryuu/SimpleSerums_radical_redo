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

void addInventory::on_pushButton_increase_clicked()
{
    QString id,quantity;
    id = ui->lineEdit->text();
    quantity = ui->lineEdit_3->text();

    QSqlQuery qry2;
    qry2.prepare("update ITEM set i_count= i_count + :quantity where i_id= :id ");
    qry2.bindValue(":quantity",quantity);
    qry2.bindValue(":id",id);
    if(qry2.exec()){
        QMessageBox::information(this,tr("Update"),tr("Inventory updated!"));
        ui->lineEdit->clear();
        ui->lineEdit_3->clear();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry2.lastError().text());
    }
}

void addInventory::on_pushButton_decrease_clicked()
{
    QString id,quantity;
    id = ui->lineEdit->text();
    quantity = ui->lineEdit_3->text();
    int numQuan = quantity.toInt();

    //SEARCH DATABASE WITH SQL, verify quantity can be decreased
    int count; //output qstrings
    QSqlQuery qry;
    qry.prepare("select i_count from ITEM where i_id=:i_id");
    qry.bindValue(":i_id", id);
    if(qry.exec()){
        if(qry.next()){
            count = qry.value(0).toInt();
        }
        else{
            QMessageBox::critical(this,tr("Not Found"),tr("Item Not Found!"));
        }

    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

    if(count - numQuan >= 0){

        QSqlQuery qry2;
        qry2.prepare("update ITEM set i_count= i_count - :quantity where i_id= :id and i_count >= :quan");
        qry2.bindValue(":quantity",quantity);
        qry2.bindValue(":id",id);
        qry2.bindValue(":quan",quantity);
        if(qry2.exec()){
            QMessageBox::information(this,tr("Update"),tr("Inventory updated!"));
            ui->lineEdit->clear();
            ui->lineEdit_3->clear();
        }
        else{
            QMessageBox::critical(this,tr("Error::"),qry2.lastError().text());
        }
    }
    else{
        QMessageBox::critical(this,tr("Error::"),"Decrement exceeds existing quanity!\nNo changes to inventory will be made");
    }
}
