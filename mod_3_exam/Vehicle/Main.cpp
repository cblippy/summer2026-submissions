#include "Vehicle.h"
#include <iostream>
using namespace std;

int main()
{
    Vehicle vehicle1("Honda Civic", 158, 2.0);
    Vehicle vehicle2("Toyota Camry", 225, 2.5);

    cout << vehicle1.getModelName() << endl;
    cout << vehicle1.getEngine()->getHorsepower() << endl;

    cout << endl;

    cout << vehicle2.getModelName() << endl;
    cout << vehicle2.getEngine()->getHorsepower() << endl;

    if(vehicle1 > vehicle2)
    {
        cout << "\nThe Honda Civic has more horsepower." << endl;
    }
    else
    {
        cout << "\nThe Toyota Camry has more horsepower." << endl;
    }
    vehicle2 += 50;
    cout << "\nAfter upgrade v" << endl;
    cout << "\t" << vehicle2.getModelName() << " horsepower: " << vehicle2.getEngine()->getHorsepower() << "\n" << endl;

    Vehicle::printFleetCount();
}
