#ifndef MAINDIRECTORY_H
#define MAINDIRECTORY_H

#include <QListWidgetItem>
#include <QDialog>
#include "addpatient.h"
#include "addinventory.h"
#include "checkin.h"
#include "removeinventory.h"
#include "searchinventory.h"
#include "removepatient.h"
#include "searchpatient.h"
#include "editpatient.h"
#include "editpatient2.h"
#include "addstaff.h"
#include "removestaff.h"
#include "editstaff.h"

namespace Ui {
class MainDirectory;
}

class MainDirectory : public QDialog
{
    Q_OBJECT

public:
    explicit MainDirectory(QWidget *parent = 0);
    ~MainDirectory();
    //added this for the admin priveleges
    void setAdmin(bool state){
        admin = state;
    }
    bool returnAdmin(){
        return admin;
    }

private slots:
    void on_pushButton_3_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();


    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void listItemClicked(QListWidgetItem*);


    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_pushButton_10_clicked();

    void on_listWidget_3_itemClicked(QListWidgetItem *item);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::MainDirectory *ui;
     addInventory *_addinventory;
     checkIn *_checkin;
     removeInventory *_removeinventory;
     searchInventory *_searchinventory;
     addPatient *_addpatient;
     removepatient *_removepatient;
     searchpatient *_searchpatient;
     addstaff *_addstaff;
     removestaff *_removestaff;
     editstaff *_editstaff;
     bool admin;
     QString SSN; //Initalize Social Security Number Variable
     bool full[4] = {true, true, true, true}; //Initalize array to check if room is free
};

#endif // MAINDIRECTORY_H
