#include "WrappingPaper.h"

WrappingPaper::WrappingPaper(Container* innerContainer, string pattern, string name)
{
    this->pattern = pattern;
    this->name = name;
    this->innerContainer = innerContainer;
}

string WrappingPaper::getPattern() const
{
    return pattern;
}

void WrappingPaper::setPattern(string pattern)
{
    this->pattern = pattern;
}

string WrappingPaper::inspect()
{
    return "decorative " + pattern + " paper wrapped around " + innerContainer->inspect();
}