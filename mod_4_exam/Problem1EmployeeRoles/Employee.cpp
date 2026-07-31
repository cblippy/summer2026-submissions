#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
    name = "";
    role = nullptr;
}

Employee::Employee(string name, Role* role)
{
    this->name = name;
    this->role = role;
}

string Employee::getName() const
{
    return name;
}

void Employee::setName(string name)
{
    this->name = name;
}

Role* Employee::getRole() const
{
    return role;
}

void Employee::setRole(Role* role)
{
    this->role = role;
}

void Employee::work()
{
    cout << name;
    if (role != nullptr)
    {
        role->performTask();
    }
}