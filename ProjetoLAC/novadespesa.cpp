#include "novadespesa.h"
#include "ui_novadespesa.h"

NovaDespesa::NovaDespesa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NovaDespesa)
{
    ui->setupUi(this);
}

NovaDespesa::~NovaDespesa()
{
    delete ui;
}
