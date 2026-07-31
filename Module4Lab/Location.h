//Base Class representing a location in or out of the garden
#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
#include <string>
using namespace std;

class Location
{
protected:
    string name;
    string description;
public:
    Location();
    Location(string name, string description);

    void setName(string name);
    string getName() const;

    void setDescription(string description);
    string getDescription() const;

    virtual void interact() const;
    virtual ~Location();
};
#endif