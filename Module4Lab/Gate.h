//Derived from Location
#ifndef GATE_H
#define GATE_H
#include "Location.h"

class Gate : public Location
{
private:
    string destination;
public:
    Gate();
    Gate(string name, string description, string destination);

    void setDestination(string destination);
    string getDestination() const;

    void interact() const override;
};
#endif