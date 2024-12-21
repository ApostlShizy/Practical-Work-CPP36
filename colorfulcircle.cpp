#include "colorfulcircle.h"

ColorfulCircle::ColorfulCircle()
{       
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);

    yellowCircle    = QPixmap(":/pick/Sorce/YELLOW.png");
    redCircle       = QPixmap(":/pick/Sorce/RED.png");
    greenCircle     = QPixmap(":/pick/Sorce/GREEN.png");

    currentCircle   = greenCircle;

    setGeometry(currentCircle.rect());
}

void ColorfulCircle::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(),currentCircle);
}

QSize ColorfulCircle::minimumSizeHint() const
{
    return QSize(100,100);
}

void ColorfulCircle::setYelow()
{
    currentCircle = yellowCircle;
    update();
}

void ColorfulCircle::setGreen()
{
    currentCircle = greenCircle;
    update();
}

void ColorfulCircle::setRed()
{
    currentCircle = redCircle;
    update();
}
