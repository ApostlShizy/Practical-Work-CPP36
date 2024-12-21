#include <QWidget>
#include <QVBoxLayout>
#include <QSlider>
#include <QApplication>
#include "colorfulcircle.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget * MainWindow = new QWidget(nullptr);
    QVBoxLayout * BoxWinwow = new QVBoxLayout(MainWindow);

    MainWindow->setFixedSize(270,300);

    ColorfulCircle * ColorCircle = new ColorfulCircle;
    ColorCircle->setFixedSize(250,250);

    QSlider * ColorSlider = new QSlider(Qt::Horizontal);
    ColorSlider->setMinimum(0);
    ColorSlider->setMaximum(100);     


    QObject::connect(ColorSlider,&QSlider::valueChanged,[ColorCircle](int newValue){
        if(newValue <= 33)
        {
            ColorCircle->setGreen();
        }
        else if(newValue <= 66)
        {
            ColorCircle->setYelow();
        }
        else
        {
            ColorCircle->setRed();
        }
    });


    BoxWinwow->addWidget(ColorCircle);
    BoxWinwow->addWidget(ColorSlider);
    MainWindow->show();

    return a.exec();
}


