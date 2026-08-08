#include <iostream>
#include "PicReader.h"
using namespace std;

int main()
{
    try
    {
        Picture picture = PicReader::readPicture("colors.txt");
        cout << picture;
    }

    catch(PicReader::FileNotFoundException)
    {
        cout << "File not found." << endl;
    }

    catch(PicReader::ColorFileFormatException)
    {
        cout << "Incorrect file format." << endl;
    }
    return 0;
}