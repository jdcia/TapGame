/********************************************************************************
** Form generated from reading UI file 'game_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WINDOW_H
#define UI_GAME_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_window
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *game_window)
    {
        if (game_window->objectName().isEmpty())
            game_window->setObjectName(QStringLiteral("game_window"));
        game_window->resize(400, 300);
        centralWidget = new QWidget(game_window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 401, 231));
        game_window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(game_window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 30));
        game_window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(game_window);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        game_window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(game_window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        game_window->setStatusBar(statusBar);

        retranslateUi(game_window);

        QMetaObject::connectSlotsByName(game_window);
    } // setupUi

    void retranslateUi(QMainWindow *game_window)
    {
        game_window->setWindowTitle(QApplication::translate("game_window", "game_window", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class game_window: public Ui_game_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WINDOW_H
