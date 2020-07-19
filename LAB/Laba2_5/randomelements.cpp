#include "randomelements.h"
#include "ui_randomelements.h"

RandomElements::RandomElements(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RandomElements)
{
    ui->setupUi(this);
}

RandomElements::~RandomElements()
{
    delete ui;
}
