#include <iostream>
#include "Hover.h"
#include "Wheel.h"
#include "Skids.h"
#include "Rocket.h"
using namespace std;

int main()
{
    Mover* movers[4];
    movers[0] = new HoverDevice();
    movers[1] = new Wheel();
    movers[2] = new Skids();
    movers[3] = new Rocket();

    for(int i = 0; i < 4; i++)
    {
        cout << movers[i]->move() << endl;
    }

    for(int i = 0; i < 4; i++)
    {
        delete movers[i];
    }
}