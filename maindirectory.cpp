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
}

void MainDirectory::on_pushButton_8_clicked()
{
    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
    ui->lineEdit_2->clear();
}

void MainDirectory::on_pushButton_9_clicked()
{
    SSN = ui->lineEdit_2->text();
    ui->lineEdit_2->clear();

    QListWidgetItem *name = new QListWidgetItem;
    QSqlQuery qry;
    qry.prepare("select p_name, p_ssn from PATIENT where p_ssn=:p_ssn ");
    qry.bindValue(":p_ssn",SSN);
    if(qry.exec()){
        if(qry.next()){
            name->setText(qry.value(0).toString());
            bool add = true;
            for(int i = 0; i < ui->listWidget->count(); i++){
                if(ui->listWidget->item(i)->data(0).toString() == name->text() ){
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

    ui->lineEdit_2->hide();
    ui->label_2->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
}

//bring up window to allow addition of consultion/prescription
void MainDirectory::listItemClicked(QListWidgetItem* item)
{
    //retrieve SSN from the name(item)
    QVariant v = item->data(Qt::UserRole);
    QMessageBox::information(this, "SSN check", v.value<QString>());
    consultPrescript* _consultPrescript = new consultPrescript(this);
    _consultPrescript->show();
    _consultPrescript->ssn = v.value<QString>();
}
