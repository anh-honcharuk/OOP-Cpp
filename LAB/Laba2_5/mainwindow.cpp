#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "randomelements.h"
#include "cards.h"
#include "instruction.h"
#include "soon.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    Soon window;
    window.setModal(true);
    window.exec();

   /*RandomElements window;
   window.setModal(true);
   window.exec();*/
}

void MainWindow::on_pushButton_3_clicked()
{
     Cards window;
     window.setModal(true);
     window.exec();
}

void MainWindow::on_actionClose_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionInstruction_triggered()
{
    Instruction window;
    window.setModal(true);
    window.exec();
}
