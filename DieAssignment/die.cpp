#include "die.h"
#include <cstdlib>
using namespace std;

Die::Die()
{
    numberOfSides = 6;
    faceValue = 1;
}



int Die::getNumberOfSides()
{
    return numberOfSides;
}

int Die::getFaceValue()
{
    return faceValue;
}



void Die::setNumberOfSides(int sides)
{
    numberOfSides = sides;
}

void Die::setFaceValue(int fvalue)
{
    faceValue = fvalue;
}

void Die::roll()
{
    faceValue = rand() % numberOfSides + 1;
}

string Die::getDescription()
{
    return "Sides: " + to_string(numberOfSides) + ", Face Value: " + to_string(faceValue);
}