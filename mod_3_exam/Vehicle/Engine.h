#ifndef ENGINE_H
#define ENGINE_H
#include <string>

class Engine
{
private: 
    int horsepower;
    double displacementLiters;
public: 
    Engine();
    Engine(int horsepower, double displacementLiters);
    int getHorsepower() const;
    double getDisplacementLiters() const;
    void setHorsepower(int horsepower);
    void setDisplacementLiters(double displacementLiters);
};
#endif