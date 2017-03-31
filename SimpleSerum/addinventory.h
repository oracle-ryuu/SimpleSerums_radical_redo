#ifndef ADDINVENTORY_H
#define ADDINVENTORY_H

#include <QWidget>

namespace Ui {
class addInventory;
}

class addInventory : public QWidget
{
    Q_OBJECT

public:
    explicit addInventory(QWidget *parent = 0);
    ~addInventory();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addInventory *ui;
};

#endif // ADDINVENTORY_H
