#ifndef HIGHLANDER_H
#define HIGHLANDER_H
#include <string>
using namespace std;

class Highlander
{
private:
    string name;
    static int count;
public:
    Highlander();
    Highlander(string);
    ~Highlander();
    static string speak();
    string status();
};
#endif