#ifndef DIODEIMPRESSION_H
#define DIODEIMPRESSION_H
#include <QPoint>

#include "diode.h"

class DiodeImpression
{
    QPoint wheelPos;
    const Diode &diode;
    int trailPos;

public:
    DiodeImpression();
};

#endif // DIODEIMPRESSION_H
