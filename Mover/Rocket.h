#ifndef ROCKET_H
#define ROCKET_H
#include "Mover.h"

class Rocket : public Mover
{
public:
    Rocket();
    string move() override;
};
#endif