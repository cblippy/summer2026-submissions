#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager(string department)
    : Role ("Manager")
{
    this->department = department;
}

string Manager::getDepartment() const
{
    return department;
}

void Manager::setDepartment(string department)
{
    this->department = department;
}

void Manager::performTask()
{
    cout << ", the " << title << ", holds a status meeting for the " 
         << department << " department." << endl;
}