#include "die.h"
#include <cstdlib>
#include <ctime>

Die::Die()
{
    sides = 6;
    faceValue = 1;
}

Die::Die(int numberOfSides)
{
    sides = numberOfSides;
    faceValue = 1;
}

void Die::roll()
{
    faceValue = (rand() % sides) + 1;
}

int Die::getFaceValue()
{
    return faceValue;
}