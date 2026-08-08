#ifndef PICTURE_H
#define PICTURE_H
#include <iostream>
#include <vector>
#include "Color.h"
using namespace std;

class Picture
{
private:
    vector<vector<Color>> pixels;
public:
    Picture(int width, int height);
    void setPixel(int x, int y, Color c);
    int getWidth();
    int getHeight();

    friend ostream& operator<<(ostream& out, const Picture& p);
};
#endif