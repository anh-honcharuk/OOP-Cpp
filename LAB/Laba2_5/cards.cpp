#include "cards.h"
#include "ui_cards.h"
#include <QRandomGenerator>
#include <cmath>

Cards::Cards(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cards)
{
    ui->setupUi(this);

}

Cards::~Cards()
{
    delete ui;
}

void Cards::ListOfCards(int n)
{
   // int suit = (int)ceil((double)n/13);
    int N = n%13;
    if(n<14){
         ui->textBrowser->QTextEdit::append("<span style='color:red;'>Diamonds </span ");
    }
    if(n>13 && n<27){
         ui->textBrowser->QTextEdit::append("<span style='color:red;'>Hearts </span ");
    }
    if(n>26 && n<40){
         ui->textBrowser->QTextEdit::append("<span style='color:black;'>Spades </span ");
    }
    if(n>39){
         ui->textBrowser->QTextEdit::append("<span style='color:black;'>Clubs </span ");
    }

    if(N == 1){
        ui->textBrowser->QTextEdit::insertPlainText("Ace");
    }else if((N>1)&&(N<11)){
       ui->textBrowser->QTextEdit::insertPlainText(QString::number(N));
    }else if(N == 11){
        ui->textBrowser->QTextEdit::insertPlainText("King");
     }else if(N == 12){
        ui->textBrowser->QTextEdit::insertPlainText("Queen");
     }else if(N == 0){
        ui->textBrowser->QTextEdit::insertPlainText("Jack");
     }

}

void Cards::Take(int n){

    int q;
    for(int i=w; i<w+n; i++){
        if(i<52){
        q = qrand() % 52 + 1;
        if(mas[q]==q){
            do{
                q = qrand() % 52 + 1;
            }while(mas[q]!=q);
            
            ListOfCards(q);
            mas[q]=q;
        }else{
          ListOfCards(q);
          mas[q]=q;
            }
        }else{
           ui->textBrowser->QTextEdit::append("---Use new desk---");
           break;
        }
    }
    w+=n;
}

void Cards::Delete(){
    for(int i=0; i < 53; i++){
        mas[i]=0;
    }
}


void Cards::on_pushButton_clicked()
{
    Take(ui->spinBox->value());
}

void Cards::on_pushButton_2_clicked()
{
    w=0;
    Delete();
    ui->textBrowser->QTextEdit::append("---New desk of cards---");
}


void Cards::on_pushButton_3_clicked()
{
    w=0;
    Delete();
    ui->textBrowser->QTextEdit::clear();
}
