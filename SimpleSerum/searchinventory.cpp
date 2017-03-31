#include "searchinventory.h"
#include "ui_searchinventory.h"
#include <QString>


searchInventory::searchInventory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchInventory)
{
    ui->setupUi(this);
}

searchInventory::~searchInventory()
{
    delete ui;
}

void searchInventory::on_pushButton_clicked()
{
    QString ID = ui->lineEdit->text();
    //SEARCH DATABASE WITH SQL

}

void searchInventory::on_pushButton_2_clicked()
{
    this->hide();
}
