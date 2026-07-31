//Derived from Location
#ifndef BENCH_H
#define BENCH_H
#include "Location.h"

class Bench : public Location
{
public:
    Bench();
    Bench(string name, string description);
    void interact() const override;
};
#endif