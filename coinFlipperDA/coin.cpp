#include "coin.h"
#include <cstdlib>

Coin::Coin() : centValue(1)
{
    flip();
}

Coin::Coin(int value) : centValue(value)
{
    flip();
}

void Coin::flip()
{
    isHeads = (rand() % 2 == 0);
}

bool Coin::isItHeads() const
{
    return isHeads;
}

string Coin::getSideUp() const
{
    if (isHeads)
    {
        return "Heads";
    } 
    else
    {
        return "Tails";
    }
}

int Coin::getCentValue() const
{
    return centValue;
}