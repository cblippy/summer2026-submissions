#include "Spinner.h"
#include <cstdlib>

Spinner::Spinner (int newSides)
{
    sides = newSides;
}

int Spinner::spin()
{
    return rand() % sides + 1;
}