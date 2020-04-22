#include "game_window.h"
#include "ui_game_window.h"

#include <QPen>
#include <QBrush>
#include <QGraphicsRectItem>
#include <QGraphicsItemAnimation>

game_window::game_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game_window)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);

    ui->graphicsView->setScene(scene);

    QPen pen = QPen(Qt::red);
    QBrush brush = QBrush(Qt::blue);
    pen.setWidth(2);

    QGraphicsRectItem *rect;


    rect = scene->addRect(10, 10, 100,100, pen, brush);

    QTimeLine *timer = new QTimeLine(5000);
     timer->setFrameRange(0, 100);

     QGraphicsItemAnimation *animation = new QGraphicsItemAnimation;
     animation->setItem(rect);
     animation->setTimeLine(timer);

     for (int i = 0; i < 200; ++i)
         animation->setPosAt(i / 200.0, QPointF(i, i));

     timer->start();
}

game_window::~game_window()
{
    delete ui;





}
