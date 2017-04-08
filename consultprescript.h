#ifndef CONSULTPRESCRIPT_H
#define CONSULTPRESCRIPT_H

#include <QDialog>

namespace Ui {
class consultPrescript;
}

class consultPrescript : public QDialog
{
    Q_OBJECT

public:
    explicit consultPrescript(QWidget *parent = 0);
    ~consultPrescript();

private:
    Ui::consultPrescript *ui;
};

#endif // CONSULTPRESCRIPT_H
