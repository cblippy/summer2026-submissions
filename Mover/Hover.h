#ifndef HOVERDEVICE_H
#define HOVERDEVICE_H
#include "Mover.h"

class HoverDevice : public Mover
{
public:
    HoverDevice();
    string move() override;
};
#endif