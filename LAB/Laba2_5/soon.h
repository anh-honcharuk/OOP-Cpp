#ifndef SOON_H
#define SOON_H

#include <QDialog>

namespace Ui {
class Soon;
}

class Soon : public QDialog
{
    Q_OBJECT

public:
    explicit Soon(QWidget *parent = nullptr);
    ~Soon();

private:
    Ui::Soon *ui;
};

#endif // SOON_H
