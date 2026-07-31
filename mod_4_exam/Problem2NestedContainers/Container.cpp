#include "Container.h"

Container::Container()
{
    name = "Bare Object";
    innerContainer = nullptr;
}

string Container::getName() const
{
    return name;
}

Container* Container::getInnerContainer() const
{
    return innerContainer;
}

string Container::inspect()
{
    return "a bare object";
}