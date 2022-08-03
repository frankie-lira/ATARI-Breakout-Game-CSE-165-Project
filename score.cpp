#include "score.h"
#include <QFont>

score::score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    score1 = 0;

    // draw the text
    setPlainText(QString("Score: ") + QString::number(score1)); // Score: 0
    setDefaultTextColor(Qt::white);
    setFont(QFont("times",16));
}

void score::increase(){
    score1++;
    setPlainText(QString("Score: ") + QString::number(score1)); // Score: 1
}

int score::getScore(){
    return score1;
}
