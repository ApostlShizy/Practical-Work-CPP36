#ifndef COLORFULCIRCLE_H
#define COLORFULCIRCLE_H

#include <QWidget>
#include <QPaintEvent>
#include <QPixmap>
#include <QPainter>

class ColorfulCircle : public QWidget
{
    Q_OBJECT

private:
    QPixmap greenCircle;
    QPixmap yellowCircle;
    QPixmap redCircle;    
    QPixmap currentCircle;

public:
    ColorfulCircle();
    void paintEvent(QPaintEvent* e) override;
    QSize minimumSizeHint() const override;
    void setYelow();
    void setRed();
    void setGreen();
};

#endif // COLORFULCIRCLE_H
