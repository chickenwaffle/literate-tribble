#include "intro.h"
#include "ui_intro.h"

Intro::Intro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Intro)
{
    ui->setupUi(this);
}

Intro::~Intro()
{
    delete ui;
}

int Intro::getMapSize() {
    return mapSize;
}


bool Intro::on_btnCancel_clicked()
{
    return this->close();
}

bool Intro::on_btnOK_released()
{
    mapSize = ui->spinBox->text().toInt();
    return !this->close();
}
