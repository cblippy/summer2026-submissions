#ifndef MOVER_H
#define MOVER_H
#include <string>
using namespace std;

class Mover
{
private:
    double mph;
public:
    Mover();
    Mover(double mph);
    virtual string move();
    double getMPH();
    void setMPH(double mph);
    virtual ~Mover()
    {
    }
};
#endif