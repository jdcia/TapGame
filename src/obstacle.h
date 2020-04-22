#ifndef OBSTACLE_H
#define OBSTACLE_H
#include <QPen>
#include <QBrush>
#include <QGraphicsRectItem>
#include <QGraphicsItemAnimation>
#include <QGraphicsScene>



class obstacle
{
public:

    //variables
    QGraphicsRectItem *ob; //this eventually may become a list of obstactes depending if I decide to stack them
    QGraphicsScene * parent_scene;

    //functions
    obstacle(QGraphicsScene * scene);
    void create_objects();
    void link_animation();


};

#endif // OBSTACLE_H
