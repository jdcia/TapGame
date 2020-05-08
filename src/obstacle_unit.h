#ifndef OBSTACLE_UNIT_H
#define OBSTACLE_UNIT_H
#include <QPen>
#include <QBrush>
#include <QGraphicsRectItem>
#include <QGraphicsItemAnimation>
#include <QGraphicsScene>
#include <QParallelAnimationGroup>
#include <qtimeline.h>
#include <QPropertyAnimation>



class obstacle_unit : public QObject
{
    Q_OBJECT

public:

    //variables

    QGraphicsScene * parent_scene;

    QGraphicsRectItem *rect1;
    QGraphicsRectItem *rect2;

    QGraphicsItemAnimation *animation1;
    QGraphicsItemAnimation *animation2;
    QTimeLine *timer; //may move to game_window class and take in as param from constructor

    //functions
    obstacle_unit(QGraphicsScene * scene);
    void start();

signals:
    void send_checkpoint();

};



#endif // OBSTACLE_CONTROL_H
