/*
 *
 *This class will control the flow of obstacles.
 *
 *
 */




#include "obstacle_unit.h"
/*
 * This will create 2 obstacles and save them in the obstacles_unit structure.
 */

obstacle_unit::obstacle_unit(QGraphicsScene * scene){

    parent_scene = scene;
    timer = new QTimeLine(5000);

    QPen pen = QPen(Qt::red);
    QBrush brush = QBrush(Qt::blue);

    QGraphicsRectItem *rect1 = scene->addRect(250, 150, 50,100, pen, brush); //fix starting position
    QGraphicsRectItem *rect2 = scene->addRect(250, 50, 50,100, pen, brush); //fix starting position





    //create animations for objects.
    QGraphicsItemAnimation *animation1 = new QGraphicsItemAnimation;
    QGraphicsItemAnimation *animation2 = new QGraphicsItemAnimation;


    //add items to each animation
    animation1->setItem(rect1);
    animation2->setItem(rect2);
    animation1->setTimeLine(timer);
    animation1->setTimeLine(timer);


    int start = 0;


    //create the animations
     while(start < scene->width() + 100){

         animation1->setPosAt(1, QPointF(-start, 0));
         animation2->setPosAt(1, QPointF(-start, 0));

         start++;
     }


}
void obstacle_unit::start()
{
        timer->start();
}

//REFERENCE CODE--------------------------------------------------------------------------

//QPen pen = QPen(Qt::red);
//QBrush brush = QBrush(Qt::blue);
//pen.setWidth(2);

//QGraphicsRectItem *rect;


//rect = scene->addRect(250, 50, 50,100, pen, brush);

//QTimeLine *timer = new QTimeLine(5000);
// timer->setFrameRange(0, 100);

// QGraphicsItemAnimation *animation = new QGraphicsItemAnimation;
// animation->setItem(rect);
// animation->setTimeLine(timer);


//int start = 0;

// while(start < scene->width() + 100){

//     animation->setPosAt(1, QPointF(-start, 0));
//     animation->

//     start++;
// }


// timer->start();

//-----------------------------------------------------------------------------------







//--------------------------------obstacle unit----------------------------------------------------------------------------------



