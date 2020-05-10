#include "widget.h"

#include <QApplication>
#include <QString>
#include <QLabel>
#include <QDebug>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    qDebug() << "sizeof widget: " << sizeof(w)
           << "  sizeof qapplication: " << sizeof(a);
    QString Message;
    QTextStream buf(&Message);
    buf << "A Widget is " << sizeof(w)
        << " bytes. \n Object is " << sizeof(QObject)
        << " bytes. \n QApplication is " << sizeof(a)
        << " bytes.";
    qDebug() << Message;
    QLabel label(Message);
    label.show();




    w.show();
    return a.exec();
}
