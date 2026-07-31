#include "Container.h"
#include "Box.h"
#include "WrappingPaper.h"
#include <iostream>
using namespace std;

int main()
{
    Container* item1 = new Container();
    Container* wrapped1 = new WrappingPaper(item1);
    Container* box1 = new Box(wrapped1);
    
    cout << box1->inspect() << endl;
    cout << endl;

    Container* item2 = new Container();
    Container* wrapped2 = new WrappingPaper(item2);
    Container* innerBox = new Box(wrapped2);
    Container* wrappedAgain = new WrappingPaper(innerBox, "birthday");
    Container* outerBox = new Box(wrappedAgain);
    
    cout << outerBox->inspect() << endl;
    cout << endl;
}