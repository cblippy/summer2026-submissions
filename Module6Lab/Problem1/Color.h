#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color
{
private:
    int red;
    int green;
    int blue;
public:
    Color();
    Color(int red, int green, int blue);

    int getRed();
    int getGreen();
    int getBlue();

    void setRed(int red);
    void setGreen(int green);
    void setBlue(int blue);

    friend ostream& operator<<(ostream& out, const Color& c);
};
#endif