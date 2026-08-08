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

Picture PicReader::readPicture(string fileName)
{
    ifstream file(fileName);

    if(!file)
    {
        throw FileNotFoundException();
    }

    Picture picture(100,100);

    int x;
    int y;
    int red;
    int green;
    int blue;

    while(true)
    {
        if(file.eof())
        {
            break;
        }

        if(!(file >> x >> y >> red >> green >> blue))
        {
            throw ColorFileFormatException();
        }

        try
        {
            if(x < 0)
                throw CoordinateOutOfRangeException(x);

            if(y < 0)
                throw CoordinateOutOfRangeException(y);

            if(red < 0 || red > 255)
                throw ColorVectorOutOfRangeException(red);

            if(green < 0 || green > 255)
                throw ColorVectorOutOfRangeException(green);

            if(blue < 0 || blue > 255)
                throw ColorVectorOutOfRangeException(blue);

            picture.setPixel(x,y,Color(red,green,blue));
        }

        catch(CoordinateOutOfRangeException &e)
        {
            cout << "Coordinate out of range: "
                 << e.getCoordValue()
                 << endl;
        }

        catch(ColorVectorOutOfRangeException &e)
        {
            cout << "Color value out of range: "
                 << e.getColorValue()
                 << endl;

            if(red < 0) red = 0;
            if(red > 255) red = 255;

            if(green < 0) green = 0;
            if(green > 255) green = 255;

            if(blue < 0) blue = 0;
            if(blue > 255) blue = 255;

            picture.setPixel(x,y,Color(red,green,blue));
        }
    }
    file.close();
    return picture;
}