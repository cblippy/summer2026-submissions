#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Role.h"
#include <vector>

class Developer : public Role
{
private:
    vector<string> languages;
public:
    Developer();
    
    void writeCode(string language);
    string selectLanguage();

    virtual void performTask() override;
};
#endif