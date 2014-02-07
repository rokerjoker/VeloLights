#include "dispatcher.h"

Dispatcher::Dispatcher(const Wheel &wheel, const DiodeStack &diodeStack, QObject *parent)
    : wheel_(wheel)
    , diodeStack_(diodeStack)
    , QObject(parent)
{

}
