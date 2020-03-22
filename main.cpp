#include "dialog.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsProxyWidget>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;

    w.show();
    return a.exec();
}
