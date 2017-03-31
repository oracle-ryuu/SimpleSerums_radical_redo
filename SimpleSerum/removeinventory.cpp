#include "removeinventory.h"
#include "ui_removeinventory.h"
#include <QString>

removeInventory::removeInventory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::removeInventory)
{
    ui->setupUi(this);
}

removeInventory::~removeInventory()
{
    delete ui;
}

void removeInventory::on_pushButton_clicked()
{
    QString item_id = ui->lineEdit->text();
    //SEARCH TO SEE IF IT EXISTS. IF NOT EXIST, PRODUCE "NOT FOUND" DIALOGUE
    //IF EXISTS, REMOVE FROM DATABASE WITH SQL
}

void removeInventory::on_pushButton_2_clicked()
{
    this->hide();
}
