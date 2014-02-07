#ifndef WHEEL_H
#define WHEEL_H
#include <QList>

#include "diodestick.h"

class Wheel
{
    //! Current angle in radians
    double angle_;
    //! Current angleSpeed in radians/second
    double angleSpeed_;
    //! Current angleAcceleration in radians/secondsquared
    double angleAcceleration_;
    //! Time in seconds during which a diode is visible (due to vision inertia, probably)
    double diodeImpressionTime;



public:
    explicit Wheel(double angle = 0, double angleSpeed_ = 6.28, double angleAcceleration_ = 0);

};

#endif // WHEEL_H
