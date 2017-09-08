#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tile.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Tile* tile = new Tile(this);
    tile->setText("Hello");
    tile->setToolTip("Click here");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tile2_clicked()
{

}
