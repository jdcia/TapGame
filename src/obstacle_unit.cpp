/*
 *
 *This class will control the flow of obstacles.
 *
 *
 */


#include "obstacle_unit.h"
#include <iostream>
#include <QPropertyAnimation>
/*
 * This will create 2 obstacles and save them in the obstacles_unit structure.
 */


obstacle_unit::obstacle_unit(QObject *par) : QObject(par){
    parent = par;

}

void obstacle_unit::setup(QGraphicsScene *scene){
    parent_scene = scene;
    timer = new QTimeLine(4000, parent);
    timer->setFrameRange(0,100);

    QPen pen = QPen(Qt::red);
    QBrush brush = QBrush(Qt::blue);

    //eventually randomize hieght

    QGraphicsRectItem *rect1 = scene->addRect(scene->width() + 100, 150, 50,50, pen, brush); //fix starting position
    QGraphicsRectItem *rect2 = scene->addRect(scene->width() + 100, 50, 50,50, pen, brush); //fix starting position


    //create animations for objects.
    QGraphicsItemAnimation *animation1 = new QGraphicsItemAnimation;
    QGraphicsItemAnimation *animation2 = new QGraphicsItemAnimation;


    //add items to each animation
    animation1->setItem(rect1);
    animation2->setItem(rect2);
    animation1->setTimeLine(timer);
    animation2->setTimeLine(timer);


    int start = 0;

    //create the animations
     while(start < scene->width() + 250){


         animation1->setPosAt(1, QPointF(-start, 0));
         animation2->setPosAt(1, QPointF(-start, 0));
         start++;
     }

     timer->setLoopCount(0);
}
void obstacle_unit::start()
{
    std::cout << "swag" << "\n";
    connect(timer, SIGNAL(valueChanged(qreal)), this, SLOT(start_animation(qreal)));        //timer->start();
    timer->start();

}
void obstacle_unit::start_animation(qreal state){
    std::cout << "yoolo" << "\n";

    std::cout << state << "in start \n";
}
