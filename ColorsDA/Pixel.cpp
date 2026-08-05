#include "Pixel.h"

Pixel::Pixel()
{
    X = 0;
    Y = 0;
    red = 0;
    green = 0;
    blue = 0;
    img = ' ';
}

Pixel::Pixel(int X, int Y, int red, int green, int blue, char img)
{
    this->X = X;
    this->Y = Y;
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->img = img;
}


int Pixel::getX()
{
    return X;
}

int Pixel::getY()
{
    return Y;
}

int Pixel::getRed()
{
    return red;
}

int Pixel::getGreen()
{
    return green;
}

int Pixel::getBlue()
{
    return blue;
}

char Pixel::getImg()
{
    return img;
}



void Pixel::setX(int X)
{
    this->X = X;
}

void Pixel::setY(int Y)
{
    this->Y = Y;
}

void Pixel::setRed(int red)
{
    this->red = red;
}

void Pixel::setGreen(int green)
{
    this->green = green;
}

void Pixel::setBlue(int blue)
{
    this->blue = blue;
}

void Pixel::setImg(char img)
{
    this->img = img;
}

ostream& operator<<(ostream& out, const Pixel& p)
{
    out << p.img;
    return out;
}