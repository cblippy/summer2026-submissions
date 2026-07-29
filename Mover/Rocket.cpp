#include "Rocket.h"

Rocket::Rocket() : Mover(1000)
{
}

string Rocket::move()
{
    return "Shoots through the air at " + to_string(getMPH()) + " MPH";
}