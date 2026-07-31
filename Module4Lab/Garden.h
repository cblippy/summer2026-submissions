//Represents the garden. Aggregates the Fountain, Bench, and Gate objects.
#ifndef GARDEN_H
#define GARDEN_H
#include "Fountain.h"
#include "Bench.h"
#include "Gate.h"

class Garden
{
private:
    Fountain fountain;
    Bench bench;
    Gate gate;
public:
    Garden();

    Fountain& getFountain();
    Bench& getBench();
    Gate& getGate();

    void displayLocations() const;
};
#endif