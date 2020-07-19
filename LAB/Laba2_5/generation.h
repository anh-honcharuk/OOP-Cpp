#ifndef GENERATION_H
#define GENERATION_H

#include <QDialog>

namespace Ui {
class Generation;
}

class Generation : public QDialog
{
    Q_OBJECT

public:
    explicit Generation(QWidget *parent = nullptr);
    ~Generation();

private:
    Ui::Generation *ui;
};

#endif // GENERATION_H
