#include "tile.h"
#include <QDebug>
Tile::Tile(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent)
{
    connect (this, SIGNAL(clicked()), this, SLOT(tileClicked()));
}

Tile::~Tile() {}

void Tile::tileClicked() {
    DockWidget* d = new DockWidget();
    d->show();
    qDebug() << "DockWidget created and shown...\n";

}

void Tile::mouseReleaseEvent(QMouseEvent* event) {
    emit clicked();
}
