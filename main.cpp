#include "dialog.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsProxyWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
/*1
    Dialog w_ui;
    QGraphicsScene *scene = new QGraphicsScene;
    QGraphicsProxyWidget *w = scene->addWidget(&w_ui);
    w->setRotation(180);
    QGraphicsView *view = new QGraphicsView(scene);
    view->show();
    w_ui.show();
*/
    return a.exec();
}
