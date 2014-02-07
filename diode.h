#ifndef DIODE_H
#define DIODE_H
#include <QColor>
#include <QList>

class Diode
{
    QColor color_;
    QList<QColor> trail_;
    static double impressionTime;
public:
    Diode(QColor color)
        :color_(color)
    {
        tick();
    }
    void setColor (QColor color) {color_ = color;}
    QColor color(int trailPos = 0) const {return trail_.at(trailPos);}
    void tick() {trail_.prepend(color_);}
    void setTrailSize(int size);
};

#endif // DIODE_H
