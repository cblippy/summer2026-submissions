#ifndef ROLE_H
#define ROLE_H
#include <string>
using namespace std;

class Role
{
protected: 
    string title;
public: 
    Role();
    Role(string title);
    virtual ~Role()
    {
    }

    string getTitle() const;
    void setTitle(string title);

    virtual void performTask() = 0;
};
#endif