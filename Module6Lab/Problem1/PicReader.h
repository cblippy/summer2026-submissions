#ifndef PICREADER_H
#define PICREADER_H
#include <iostream>
#include <fstream>
#include "Picture.h"
using namespace std;

class PicReader
{
public:
    class FileNotFoundException{};
    class ColorFileFormatException{};
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
    static Picture readPicture(string fileName);
};
#endif