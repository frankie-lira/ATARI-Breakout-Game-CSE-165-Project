#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsScene>
#include "block.h"
#include <QGraphicsTextItem>
#include <cstdlib>
#include "score.h"
class Game: public QGraphicsView{
public:
    // constructors
    Game(QWidget* parent=NULL);

    // public methods
    void start();
    void createBlockCol(double x);
    void creatBlockGrid();

    // public attributes
    QGraphicsScene* scene;

    //(ADDED)
    Block * block;
    QGraphicsTextItem * scoreboard;
    score * score;
    int xSize();
    int ySize();
    void updateStats();
    void increasePoints();
    int getPoints();

private:
      int score1;
      int width1;
      int height1;
      unsigned int EnemysNum;

};

#endif // GAME_H
