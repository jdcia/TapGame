/*
 *
 *This class will control the flow of obstacles.
 *
 *
 */




#include "obstacle_control.h"
obstacle_control::obstacle_control(QGraphicsScene * scene, double w, double h)
{
    parent_scene = scene; //this way we have the scene.

    width = w;
    hieght = h;

}


/*
 * This will create 2 obstacles and save them in the obstacles_unit structure.
 */

void obstacle_control::create_objects(){
    //this will create the objects used from the scene

    //for this game mode we only need 2 objects that move to the left and off the screen.



}

void obstacle_control::link_animation(){
    //here we will create an animation for the object
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



void start();
