//Creates the sim...
//Shows inheritance, aggregation, and polymorphism.
#include <iostream>
#include <string>
#include "Garden.h"
#include "Player.h"
#include "Location.h"
using namespace std;

int main()
{
    Garden garden;
    string name;

    cout << "\n\nWelcome to the Garden Sim!" << endl;
    cout << "Enter your players name: ";
    getline(cin, name);
    Player player(name); 

    Location* currentLocation = nullptr;

    int choice;
    cout << endl;

    player.displayStatus();

    do
    {
        garden.displayLocations();

        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch (choice)
        {
            case 1:
                currentLocation = &garden.getFountain();
                break;

            case 2:
                currentLocation = &garden.getBench();
                break;

            case 3:
                currentLocation = &garden.getGate();
                break;

            case 4:
                cout << "Come by again!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
                break;
        }

        if (currentLocation != nullptr && choice != 4)
        {
            cout << currentLocation->getDescription() << endl;
            currentLocation->interact();
        }
        cout << endl;

    } while (choice != 4);

    return 0;
}