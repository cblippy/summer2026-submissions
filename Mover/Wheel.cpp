#include "Wheel.h"

Wheel::Wheel() : Mover(30)
{
}

string Wheel::move()
{
    return "Rolls over the ground at " + to_string(getMPH()) + " MPH";
}