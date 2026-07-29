#include "Skids.h"

Skids::Skids() : Mover(20)
{
}

string Skids::move()
{
    return "Skids across the water at " + to_string(getMPH()) + " MPH";
}