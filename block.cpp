#include "block.h"
#include <QBrush>

Block::Block(QGraphicsItem *parent): QGraphicsRectItem(parent){
    // draw rect
    setRect(0,0,50,50);
    QBrush brush;
    brush.setStyle(Qt::Dense4Pattern);
    brush.setColor(Qt::darkBlue);
    setBrush(brush);
}
