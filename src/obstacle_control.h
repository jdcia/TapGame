#ifndef OBSTACLE_CONTROL_H
#define OBSTACLE_CONTROL_H
#include <QPen>
#include <QBrush>
#include <QGraphicsRectItem>
#include <QGraphicsItemAnimation>
#include <QGraphicsScene>



class obstacle_control
{
public:

    //variables
    QGraphicsRectItem *ob; //this eventually may become a list of obstactes depending if I decide to stack them
    QGraphicsScene * parent_scene;

    //functions
    obstacle_control(QGraphicsScene * scene, double w, double h;
    void create_objects();
    void link_animation();

    double width; //this is the total width of the screen.
    double hieght; //this is the total hieght on the screen.


};

#endif // OBSTACLE_CONTROL_H
