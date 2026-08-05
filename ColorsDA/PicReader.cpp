#include "PicReader.h"

PicReader::CoordinateOutOfRangeException::CoordinateOutOfRangeException(int value)
{
    coordValue = value;
}

int PicReader::CoordinateOutOfRangeException::getCoordValue()
{
    return coordValue;
}

PicReader::ColorVectorOutOfRangeException::ColorVectorOutOfRangeException(int value)
{
    colorValue = value;
}

int PicReader::ColorVectorOutOfRangeException::getColorValue()
{
    return colorValue;
}

vector<Pixel> PicReader::readPic(string fileName)
{
    vector<Pixel> pixels;
    ifstream file(fileName);

    int X;
    int Y;
    int red;
    int green;
    int blue;
    char img = '~';

    while(file >> X >> Y >> red >> green >> blue)
    {
        try
        {
            if(X < 0)
            {
                throw CoordinateOutOfRangeException(X);
            }

            if(Y < 0)
            {
                throw CoordinateOutOfRangeException(Y);
            }

            if(red < 0 || red > 255)
            {
                throw ColorVectorOutOfRangeException(red);
            }

            if(green < 0 || green > 255)
            {
                throw ColorVectorOutOfRangeException(green);
            }

            if(blue < 0 || blue > 255)
            {
                throw ColorVectorOutOfRangeException(blue);
            }

            Pixel p(X, Y, red, green, blue, img);
            pixels.push_back(p);
        }


        catch(CoordinateOutOfRangeException& e)
        {
            cout << "Coordintes error: "
                 << e.getCoordValue()
                 << endl;
        }

        catch(ColorVectorOutOfRangeException& e)
        {
            cout << "Colors error: "
                 << e.getColorValue()
                 << endl;

            if(red < 0)
                red = 0;

            if(red > 255)
                red = 255;


            if(green < 0)
                green = 0;

            if(green > 255)
                green = 255;


            if(blue < 0)
                blue = 0;

            if(blue > 255)
                blue = 255;

            Pixel p(X, Y, red, green, blue, img);
            pixels.push_back(p);
        }
    }
    file.close();

    return pixels;
}