#include "generation.h"
#include "ui_generation.h"

Generation::Generation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Generation)
{
    ui->setupUi(this);
}

Generation::~Generation()
{
    delete ui;
}
