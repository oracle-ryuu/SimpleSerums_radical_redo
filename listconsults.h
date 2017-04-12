#ifndef LISTCONSULTS_H
#define LISTCONSULTS_H

#include <QListWidgetItem>
#include <QDialog>
#include <QtSql>
#include "fordatabase.h"

namespace Ui {
class listconsults;
}

class listconsults : public QDialog
{
    Q_OBJECT

public:
    explicit listconsults(QWidget *parent = 0);
    ~listconsults();
    dataffff db;
    QString ID;

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::listconsults *ui;
};

#endif // LISTCONSULTS_H
