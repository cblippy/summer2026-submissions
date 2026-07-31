#ifndef WRAPPINGPAPER_H
#define WRAPPINGPAPER_H
#include "Container.h"

class WrappingPaper : public Container
{
private: 
    string pattern;
public: 
    WrappingPaper(Container* innerContainer,
                  string pattern = "festive",
                  string name = "wrapping paper");
    string getPattern() const;
    void setPattern(string pattern);

    virtual string inspect() override;
};
#endif