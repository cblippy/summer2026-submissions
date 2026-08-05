#ifndef PICREADER_H
#define PICREADER_H
#include <iostream>
#include <fstream>
#include <vector>
#include "Pixel.h"
using namespace std;

class PicReader
{
public:
    class CoordinateOutOfRangeException
    {
    private:
        int coordValue;
    public:
        CoordinateOutOfRangeException(int value);
        int getCoordValue();
    };

    class ColorVectorOutOfRangeException
    {
    private:
        int colorValue;
    public:
        ColorVectorOutOfRangeException(int value);
        int getColorValue();
    };
    static vector<Pixel> readPic(string fileName);
};
#endif