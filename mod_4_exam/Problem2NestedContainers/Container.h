#ifndef CONTAINER_H
#define CONTAINER_H
#include <string>
using namespace std;

class Container
{
protected: 
    string name;
    Container* innerContainer;
public: 
    Container();

    string getName() const;
    Container* getInnerContainer() const;

    virtual string inspect();
};
#endif