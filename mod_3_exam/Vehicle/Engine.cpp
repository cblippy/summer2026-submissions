#include "Engine.h"

Engine::Engine()
{
    horsepower = 0;
    displacementLiters = 0.0;
}

Engine::Engine(int horsepower, double displacementLiters)
{
    this->horsepower = horsepower;
    this->displacementLiters = displacementLiters;
}

int Engine::getHorsepower() const
{
    return horsepower;
}

double Engine::getDisplacementLiters() const
{
    return displacementLiters;
}

void Engine::setHorsepower(int horsepower)
{
    this->horsepower = horsepower;
}

void Engine::setDisplacementLiters(double displacementLiters)
{
    this->displacementLiters = displacementLiters;
}