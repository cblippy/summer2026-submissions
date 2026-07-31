#include "Gate.h"

Gate::Gate() : Location()
{
    destination = "";
}

Gate::Gate(string name, string description, string destination)
    : Location(name, description)
{
    this->destination = destination;
}

void Gate::setDestination(string destination)
{
    this->destination = destination;
}

string Gate::getDestination() const
{
    return destination;
}

void Gate::interact() const
{
    cout << "You walk through the gate and arrive at "
         << destination << "." << endl;
}