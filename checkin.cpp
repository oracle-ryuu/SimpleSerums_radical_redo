#include "checkin.h"
#include "ui_checkin.h"

checkIn::checkIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkIn)
{
    ui->setupUi(this);
}

checkIn::~checkIn()
{
    delete ui;
}

void checkIn::on_pushButton_clicked()
{
    //VERIFY PATIENT BEFORE QUEUEING


}

void checkIn::on_pushButton_2_clicked()
{
    this->hide();
}
