#include "Developer.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Developer::Developer() : Role("Developer")
{
    languages.push_back("C++");
    languages.push_back("Python");
    languages.push_back("Java");
}

void Developer::writeCode(string language)
{
    cout << "writes code in " << language << "." << endl;
}

string Developer::selectLanguage()
{
    int index = rand() % languages.size();
    return languages[index];
}

void Developer::performTask()
{
    cout << ", the " << title << ", ";
    writeCode(selectLanguage());
}