#include "maindirectory.h"
#include "ui_maindirectory.h"
#include "consultprescript.h"
#include <QMessageBox>

MainDirectory::MainDirectory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDirectory)
{
    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->checkBox->hide();

    //standard
    connect(ui->listWidget, SIGNAL(itemClicked(QListWidgetItem*)),
            this, SLOT(listItemClicked(QListWidgetItem*)));

}

MainDirectory::~MainDirectory()
{
    delete ui;
}


void MainDirectory::on_pushButton_3_clicked()
{
    _searchinventory= new searchInventory(this);
   // _searchinventory->setWindowFlags(Qt::Popup);
    _searchinventory->show();

}

void MainDirectory::on_pushButton_6_clicked()
{
    _addpatient= new addPatient(this);
    _addpatient->show();
}

void MainDirectory::on_pushButton_2_clicked()
{
    _addinventory= new addInventory(this);
   // _addinventory->setWindowFlags(Qt::Popup);
    _addinventory->show();
}

void MainDirectory::on_pushButton_clicked()
{
    _removeinventory= new removeInventory(this);
    _removeinventory->show();
}

void MainDirectory::on_pushButton_4_clicked()
{
    _removepatient = new removepatient(this);
    _removepatient->show();
}

void MainDirectory::on_pushButton_5_clicked()
{
    _searchpatient = new searchpatient(this);
    _searchpatient ->show();

}

void MainDirectory::on_pushButton_7_clicked()
{
    ui->lineEdit_2->show();
    ui->label_2->show();
    ui->pushButton_8->show();
    ui->pushButton_9->show();
    ui->checkBox->show();
}

void MainDirectory::on_pushButton_8_clicked()
{
    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->lineEdit_2->clear();
    ui->checkBox->hide();
    if(ui->checkBox->isChecked())
        ui->checkBox->setChecked(false);
}

void MainDirectory::on_pushButton_9_clicked()
{
    SSN = ui->lineEdit_2->text();
    ui->lineEdit_2->clear();

    QListWidgetItem *name = new QListWidgetItem;
    QSqlQuery qry;
    qry.prepare("select p_name, p_ssn from PATIENT where p_ssn=:p_ssn ");
    qry.bindValue(":p_ssn",SSN);
    if(ui->checkBox->isChecked())   //If the checkBox is checked for emergency
    {
        if(qry.exec()){
            if(qry.next()){
                name->setText(qry.value(0).toString());
                bool add = true;
                for(int i = 0; i < ui->listWidget_2->count(); i++){     //Put patient under emergency listwidget
                    if(ui->listWidget_2->item(i)->data(0).toString() == name->text() ){
                        add = false;
                    }
                }
                if (add){
                    //embed SSN to name
                    QVariant v;
                    v.setValue(qry.value(1));
                    name->setData(Qt::UserRole, v);
                    ui->listWidget_2->addItem(name);
                }
                else{
                    QMessageBox::critical(this,tr("Duplicate"),tr("Patient already checked in!"));
                }

            }
            else{
                QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found!\nTry adding Patient"));
            }
        }
        else{
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        }
        ui->checkBox->setChecked(false);
    }
    else    //If checkBox is not checked
    {
        if(qry.exec()){
            if(qry.next()){
                name->setText(qry.value(0).toString());
                bool add = true;
                for(int i = 0; i < ui->listWidget->count(); i++){
                    if(ui->listWidget->item(i)->data(0).toString() == name->text() ){ //Put patient under standard listwidget
                        add = false;
                    }
                }
                if (add){
                    //embed SSN to name
                    QVariant v;
                    v.setValue(qry.value(1));
                    name->setData(Qt::UserRole, v);
                    ui->listWidget->addItem(name);
                }
                else{
                    QMessageBox::critical(this,tr("Duplicate"),tr("Patient already checked in!"));
                }

            }
            else{
                QMessageBox::critical(this,tr("Not Found"),tr("Patient Not Found!\nTry adding Patient"));
            }
        }
        else{
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        }
    }


    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->checkBox->hide();
}

//bring up window to allow addition of consultation/prescription
//standard
void MainDirectory::listItemClicked(QListWidgetItem* item)
{
    //retrieve SSN from the name(item)
    QVariant v = item->data(Qt::UserRole);
    QMessageBox::information(this, "SSN check", v.value<QString>());
    consultPrescript* _consultPrescript = new consultPrescript(this);
    _consultPrescript->show();
    _consultPrescript->ssn = v.value<QString>();
    item->setHidden(true);
}

//bring up window to allow addition of consultation/prescription
//emergency
void MainDirectory::on_listWidget_2_itemClicked(QListWidgetItem *item)
{
    QVariant v = item->data(Qt::UserRole);
    QMessageBox::information(this, "SSN check", v.value<QString>());
    consultPrescript* _consultPrescript = new consultPrescript(this);
    _consultPrescript->show();
    _consultPrescript->ssn = v.value<QString>();
    item->setHidden(true);
}
