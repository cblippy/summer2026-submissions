#include "Location.h"

Location::Location()
{
    name = "";
    description = "";
}

Location::Location(string name, string description)
{
    this->name = name;
    this->description = description;
}

void Location::setName(string name)
{
    this->name = name;
}

string Location::getName() const
{
    return name;
}

void Location::setDescription(string description)
{
    this->description = description;
}

string Location::getDescription() const
{
    return description;
}

void Location::interact() const
{
    cout << "There is nothing to interact with here." << endl;
}

Location::~Location()
{
}