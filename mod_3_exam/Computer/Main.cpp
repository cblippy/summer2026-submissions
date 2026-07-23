#include "Computer.h"
#include <iostream>
using namespace std;

int main()
{
    Processor processor1("Processor 1", 2.5);

    Computer computer1("Computer 1", &processor1);
    Computer computer2("Computer 2", "Processor", 3.5);

    cout << computer1 << endl << endl;
    cout << computer2 << endl << endl;

    Computer computer3 = computer1;

    cout << "Copy constructor:\n";
    cout << computer3 << endl << endl;

    Computer computer4;
    computer4 = computer2;

    cout << "Assignment operator:\n";
    cout << computer4 << endl << endl;

    if (computer1 == computer3)
    {
        cout << "computer 1 and computer 3 are equal" << endl;
    }
    else
    {
        cout << "computer 1 and computer 3 aren't equal" << "\n" << endl;
    }
    cout << "Processors created: " << Processor::getProcessorCount() << endl;
}