#include "soon.h"
#include "ui_soon.h"

Soon::Soon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Soon)
{
    ui->setupUi(this);
}

Soon::~Soon()
{
    delete ui;
}
