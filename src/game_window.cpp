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
    scene->setSceneRect(0, 0, 250, 250); //this hold the demesion of the scene. Fix this to fix area eventually.

    ui->graphicsView->setScene(scene);

}

game_window::~game_window()
{
    delete ui;





}
