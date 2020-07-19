#ifndef CARDS_H
#define CARDS_H

#include <QDialog>

namespace Ui {
class Cards;
}

class Cards : public QDialog
{
    Q_OBJECT

public:
    explicit Cards(QWidget *parent = nullptr);
    ~Cards();
    /*int mas[37],w=0;
    void ListOfCards(int);
    void Take(int);
    void Delete();*/

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Cards *ui;
    int mas[53],w=0;
    void ListOfCards(int);
    void Take(int);
    void Delete();
};

#endif // CARDS_H
