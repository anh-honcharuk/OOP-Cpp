#ifndef RANDOMELEMENTS_H
#define RANDOMELEMENTS_H

#include <QDialog>

namespace Ui {
class RandomElements;
}

class RandomElements : public QDialog
{
    Q_OBJECT

public:
    explicit RandomElements(QWidget *parent = nullptr);
    ~RandomElements();

private:
    Ui::RandomElements *ui;
};

#endif // RANDOMELEMENTS_H
