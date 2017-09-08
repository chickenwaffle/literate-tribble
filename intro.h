#ifndef INTRO_H
#define INTRO_H

#include <QDialog>

namespace Ui {
class Intro;
}

class Intro : public QDialog
{
    Q_OBJECT

public:
    explicit Intro(QWidget *parent = 0);
    ~Intro();

    int getMapSize();

private slots:

    bool on_btnCancel_clicked();
    bool on_btnOK_released();

private:
    Ui::Intro *ui;
    int mapSize;
};

#endif // INTRO_H
