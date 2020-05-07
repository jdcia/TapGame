#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game_window.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//game mode 1 will involve two obstacles.
void MainWindow::on_game_mode1_clicked()
{
    game1.show();
    game1.start();
}


//game mode 1 will involve one obstacle
void MainWindow::on_game_mode2_clicked()
{

}


//will send player to a settings menu
void MainWindow::on_settings_clicked()
{

}
