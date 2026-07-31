#include "Fountain.h"

Fountain::Fountain() : Location()
{
    coinThrown = false;
}

Fountain::Fountain(string name, string description)
    : Location(name, description)
{
    coinThrown = false;
}

void Fountain::setCoinThrown(bool coinThrown)
{
    this->coinThrown = coinThrown;
}

bool Fountain::getCoinThrown() const
{
    return coinThrown;
}

void Fountain::interact() const
{
    cout << "You toss a coin into the fountain and make a wish." << endl;
}