#include "Box.h"

Box::Box(Container* innerContainer)
{
    name = "box";
    this->innerContainer = innerContainer;
}

string Box::inspect()
{
    return "a sturdy box holding " + innerContainer->inspect();
}