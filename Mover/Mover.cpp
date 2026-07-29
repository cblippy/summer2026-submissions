#include "Mover.h"

Mover::Mover()
{
    mph = 0;
}

Mover::Mover(double mph)
{
    this->mph = mph;
}

string Mover::move()
{
    return "Moves at " + to_string(mph) + " MPH";
}

double Mover::getMPH()
{
    return mph;
}

void Mover::setMPH(double mph)
{
    this->mph = mph;
}