#include "Developer.h"
#include "Manager.h"
#include "Employee.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand (time(0));

    Developer developerRole;
    Manager managerRole("Quality Assurance");

    Employee employee1("Employee 1", &developerRole);
    Employee employee2("Employee 2", &managerRole);

    employee1.work();
    employee2.work();
}