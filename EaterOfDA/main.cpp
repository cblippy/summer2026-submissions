#include <iostream>
#include <string>
#include "EaterOf.h"

using namespace std;

int main()
{
    EaterOf<int> intEater;
    EaterOf<double> doubleEater;
    EaterOf<string> stringEater;

    intEater.eat(1);
    intEater.eat(2);
    intEater.eat(3);

    doubleEater.eat(1.5);
    doubleEater.eat(2.0);
    doubleEater.eat(4.25);

    stringEater.eat("nom ");
    stringEater.eat("nom ");
    stringEater.eat("nom!");

    cout << endl;

    cout << "Int burp: " << intEater.burp() << endl;
    cout << "Double burp: " << doubleEater.burp() << endl;
    cout << "String burp: " << stringEater.burp() << endl;
}