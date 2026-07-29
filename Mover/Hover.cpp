#include "Hover.h"

HoverDevice::HoverDevice() : Mover(50)
{
}

string HoverDevice::move()
{
    return "Hovers over the ground at " + to_string(getMPH()) + " MPH";
}