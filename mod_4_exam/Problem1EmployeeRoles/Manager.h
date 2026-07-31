#ifndef MANAGER_H
#define MANAGER_H
#include "Role.h"

class Manager : public Role
{
private:
    string department;
public:
    Manager(string department = "");

    string getDepartment() const;
    void setDepartment (string department);

    virtual void performTask() override;
};
#endif