#ifndef TILE_H
#define TILE_H

#include <QLabel>
#include "dockwidget.h"

class Tile : public QLabel {
    Q_OBJECT

public:
    explicit Tile(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~Tile();

signals:
    void clicked();

public slots:
    void tileClicked();

protected:
    void mouseReleaseEvent(QMouseEvent* event);

};

#endif // TILE_H
