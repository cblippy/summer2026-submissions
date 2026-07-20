#include "highlander.h"

int Highlander::count = 0;

Highlander::Highlander()
{
    name = "";
    count++;
}

Highlander::Highlander(string n)
{
    name = n;
    count++;
}

Highlander::~Highlander()
{
    count--;
}

string Highlander::speak()
{
    return "There can be only one, but now there are " + to_string(count);
}

string Highlander::status()
{
    if (count == 1)
        return "Immortal";

    return "murderous";
}