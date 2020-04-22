#include "obstacle.h"

obstacle::obstacle(QGraphicsScene * scene)
{
    parent_scene = scene; //this way we have the scene.

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

void obstacle::create_objects(){
    //this will create the objects used from the scene




}

void obstacle::link_animation(){
    //here we will create an animation for the object
}
