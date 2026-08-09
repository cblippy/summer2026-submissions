#include "die.h"
#include <cstdlib>

using namespace std;

Die::Die(int sides) : numberOfSides(sides)
{
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

void Die::setFaceValue(int value)
{
    faceValue = value;
}

void Die::roll()
{
    faceValue = rand() % numberOfSides + 1;
}

string Die::getDescription()
{
    return "Sides: " + to_string(numberOfSides) + ", Face Value: " + to_string(faceValue);
}