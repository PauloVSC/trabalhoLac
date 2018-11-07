#ifndef NOVADESPESA_H
#define NOVADESPESA_H

#include <QDialog>

namespace Ui {
class NovaDespesa;
}

class NovaDespesa : public QDialog
{
    Q_OBJECT

public:
    explicit NovaDespesa(QWidget *parent = nullptr);
    ~NovaDespesa();

private:
    Ui::NovaDespesa *ui;
};

#endif // NOVADESPESA_H
