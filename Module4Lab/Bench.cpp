#include "Bench.h"

Bench::Bench() : Location()
{
}

Bench::Bench(string name, string description)
    : Location(name, description)
{
}

void Bench::interact() const
{
    cout << "You sit on the bench and enjoy the ambiance." << endl;
}