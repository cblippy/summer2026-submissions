#ifndef SKIDS_H
#define SKIDS_H
#include "Mover.h"

class Skids : public Mover
{
public:
    Skids();
    string move() override;
};
#endif