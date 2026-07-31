#include "Role.h"

Role::Role()
{
    title = "";
}

Role::Role(string title)
{
    this->title = title;
}

string Role::getTitle() const
{
    return title;
}

void Role::setTitle(string title)
{
    this->title = title;
}