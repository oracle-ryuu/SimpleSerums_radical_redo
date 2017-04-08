#include "consultprescript.h"
#include "ui_consultprescript.h"

consultPrescript::consultPrescript(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consultPrescript)
{
    ui->setupUi(this);
}

consultPrescript::~consultPrescript()
{
    delete ui;
}
