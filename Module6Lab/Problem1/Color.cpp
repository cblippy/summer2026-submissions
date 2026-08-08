#include "Color.h"

Color::Color()
{
    red = 255;
    green = 255;
    blue = 255;
}

Color::Color(int red, int green, int blue)
{
    this->red = red;
    this->green = green;
    this->blue = blue;
}

int Color::getRed()
{
    return red;
}

int Color::getGreen()
{
    return green;
}

int Color::getBlue()
{
    return blue;
}

void Color::setRed(int red)
{
    this->red = red;
}

void Color::setGreen(int green)
{
    this->green = green;
}

void Color::setBlue(int blue)
{
    this->blue = blue;
}

ostream& operator<<(ostream& out, const Color& c)
{
    if(c.red == c.green && c.green == c.blue)
    {
        if(c.red > 250)
            out << 'W';
        else if(c.red < 50)
            out << 'D';
        else
            out << 'G';
    }

    else if(c.red == c.green && c.red > c.blue)
    {
        out << 'Y';
    }
    else if(c.red == c.blue && c.red > c.green)
    {
        out << 'P';
    }
    else if(c.green == c.blue && c.green > c.red)
    {
        out << 'T';
    }

    else if(c.red > c.green && c.red > c.blue)
    {
        out << 'R';
    }
    else if(c.green > c.red && c.green > c.blue)
    {
        out << 'V';
    }
    else
    {
        out << 'B';
    }
    return out;
}