#ifndef VEHICLE_H
#define VEHICLE_H
#include "Engine.h"
#include <string>
using namespace std;

class Vehicle
{
private:
    string modelName;
    Engine* enginePtr;
    static int totalVehicles;
public:
    Vehicle();
    Vehicle(string modelName, int horsepower, double displacementLiters);
    ~Vehicle();

    Vehicle(const Vehicle& other);
    Vehicle& operator=(const Vehicle& other);

    string getModelName() const;
    Engine* getEngine() const;

    void setModelName(string modelName);
    void setEngine(Engine* engine);
    static void printFleetCount();

    bool operator>(const Vehicle& other) const;
    Vehicle& operator+=(int horsepowerIncrease);
};
#endif