#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "game_window.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //Note game windows need to be delcared here.
    game_window game1;

private slots:
    void on_game_mode2_clicked();

    void on_game_mode1_clicked();

    void on_settings_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
