//Derived from Location
#ifndef FOUNTAIN_H
#define FOUNTAIN_H
#include "Location.h"

class Fountain : public Location
{
private:
    bool coinThrown;
public:
    Fountain();
    Fountain(string name, string description);

    void setCoinThrown(bool coinThrown);
    bool getCoinThrown() const;

    void interact() const override;
};
#endif