#include "Vehicle.h"
#include <iostream>

int Vehicle::totalVehicles = 0;

Vehicle::Vehicle()
{
    modelName = "";
    enginePtr = nullptr;
    totalVehicles++;
}

Vehicle::Vehicle(string modelName, int horsepower, double displacementLiters)
{
    this->modelName = modelName;
    enginePtr = new Engine(horsepower, displacementLiters);
    totalVehicles++;
}

Vehicle::~Vehicle()
{
    delete enginePtr;
}

Vehicle::Vehicle(const Vehicle& other)
{
    modelName = other.modelName;
    if(other.enginePtr != nullptr)
    {
        enginePtr = new Engine(*other.enginePtr);
    }
    else
    {
        enginePtr = nullptr;
    }
    totalVehicles++;
}

Vehicle& Vehicle::operator=(const Vehicle& other)
{
    if (this!= &other)
    {
        delete enginePtr;
        modelName = other.modelName;
        if (other.enginePtr != nullptr)
        {
            enginePtr = new Engine(*other.enginePtr);
        }
        else
        {
            enginePtr = nullptr;
        }
    }
    return *this;
}

string Vehicle::getModelName() const
{
    return modelName;
}

Engine* Vehicle::getEngine() const
{
    return enginePtr;
}

void Vehicle::setModelName(string modelName)
{
    this->modelName = modelName;
}

void Vehicle::setEngine(Engine* engine)
{
    delete enginePtr;
    if (engine != nullptr)
    {
        enginePtr = new Engine(*engine);
    }
    else
    {
        enginePtr = nullptr;
    }
}

void Vehicle::printFleetCount()
{
    cout << "Total Vehicles: " << totalVehicles << endl;
}

bool Vehicle::operator>(const Vehicle& other) const
{
    return enginePtr->getHorsepower()>other.enginePtr->getHorsepower();
}

Vehicle& Vehicle::operator+=(int horsepowerIncrease)
{
    enginePtr->setHorsepower(enginePtr->getHorsepower()+horsepowerIncrease);
    return *this;
}