#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QGraphicsScene>

namespace Ui {
class game_window;
}

class game_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit game_window(QWidget *parent = 0);
    ~game_window();

    void start();

private:
    Ui::game_window *ui;

    QGraphicsScene *scene;

public slots:
    void checkpoint_notif();

};



#endif // GAME_WINDOW_H
