#include <iostream>
#include <vector>
#include "Pixel.h"
#include "PicReader.h"
using namespace std;

int main()
{
    vector<Pixel> pixels;

    pixels = PicReader::readPic("colors.txt");

    cout << "\n# of pixels: " << pixels.size() << endl;
    for(Pixel p : pixels)
    {
        cout << p;
    }
    return 0;
}