#include "Picture.h"

Picture::Picture(int width, int height)
{
    pixels.resize(height);

    for(int i = 0; i < height; i++)
    {
        pixels[i].resize(width, Color(255, 255, 255));
    }
}

void Picture::setPixel(int x, int y, Color c)
{
    pixels[y][x] = c;
}

int Picture::getWidth()
{
    return pixels[0].size();
}

int Picture::getHeight()
{
    return pixels.size();
}

ostream& operator<<(ostream& out, const Picture& p)
{
    for(int y = 0; y < p.pixels.size(); y++)
    {
        for(int x = 0; x < p.pixels[y].size(); x++)
        {
            out << p.pixels[y][x];
        }
        out << endl;
    }
    return out;
}