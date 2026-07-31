#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Role.h"
using namespace std;

class Employee
{
private:
    string name;
    Role* role;
public:
    Employee();
    Employee(string name, Role* role);

    string getName() const;
    void setName(string name);

    Role* getRole() const;
    void setRole(Role* role);
    void work();
};
#endif