#ifndef REMOVEINVENTORY_H
#define REMOVEINVENTORY_H

#include <QWidget>

namespace Ui {
class removeInventory;
}

class removeInventory : public QWidget
{
    Q_OBJECT

public:
    explicit removeInventory(QWidget *parent = 0);
    ~removeInventory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::removeInventory *ui;
};

#endif // REMOVEINVENTORY_H
