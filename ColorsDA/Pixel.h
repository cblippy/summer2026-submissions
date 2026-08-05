#ifndef PIXEL_H
#define PIXEL_H
#include <iostream>
using namespace std;

class Pixel
{
private:
    int X;
    int Y;
    int red;
    int green;
    int blue;
    char img;
public:
    Pixel();
    Pixel(int X, int Y, int red, int green, int blue, char img);

    int getX();
    int getY();
    int getRed();
    int getGreen();
    int getBlue();
    char getImg();

    void setX(int X);
    void setY(int Y);
    void setRed(int red);
    void setGreen(int green);
    void setBlue(int blue);
    void setImg(char img);
    friend ostream& operator<<(ostream& out, const Pixel& p);
};
#endif