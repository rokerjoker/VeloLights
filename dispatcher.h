#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <QObject>

#include "diodestick.h"
#include "wheel.h"

class Dispatcher : public QObject
{
    Q_OBJECT
    const Wheel &wheel_;
    const DiodeStack &diodeStack_;

    typedef QList<DiodeImpressionStack> DrawData;
    DrawData drawData_;

public:
    explicit Dispatcher(const Wheel &wheel, const DiodeStack &diodeStack, QObject *parent = 0);
    const DrawData &drawData() {return drawData_;}

signals:

public slots:
    void timerSlot();
};

#endif // DISPATCHER_H
