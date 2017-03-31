#include "addinventory.h"
#include "ui_addinventory.h"
#include <QString>


addInventory::addInventory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addInventory)
{
    ui->setupUi(this);
}

addInventory::~addInventory()
{
    delete ui;
}

void addInventory::on_pushButton_clicked()
{
    QString item_id = ui->lineEdit->text();
    QString item_name = ui->lineEdit->text();
    QString item_quantity = ui->lineEdit->text();

    //CHECK VALIDITY OF INPUT




    //ADD INTO DATABASE WITH SQL


}

void addInventory::on_pushButton_2_clicked()
{
    this->hide();
}
