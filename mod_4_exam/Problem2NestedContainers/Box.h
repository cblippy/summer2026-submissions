#ifndef BOX_H
#define BOX_H
#include "Container.h"

class Box : public Container
{
public: 
    Box(Container* innerContainer);
    virtual string inspect() override;
};
#endif