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
#include <QObject>



class obstacle_unit : public QObject
{
    Q_OBJECT

public:

    //variables
    QObject *parent;
    QGraphicsScene * parent_scene;

    QGraphicsRectItem *rect1;
    QGraphicsRectItem *rect2;

    QGraphicsItemAnimation *animation1;
    QGraphicsItemAnimation *animation2;
    QTimeLine *timer; //may move to game_window class and take in as param from constructor

    //functions
    obstacle_unit(QObject *par = 0);
    void setup(QGraphicsScene *scene);
    void start();

public slots:
    void start_animation(qreal state);
signals:

};



#endif // OBSTACLE_CONTROL_H
