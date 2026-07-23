#include <iostream>
#include "polynomial.h"
using namespace std;

int main()
{
    Term terms1[3];
    terms1[0] = Term(3, 'x', 2);
    terms1[1] = Term(4, 'x', 1);
    terms1[2] = Term(2, 'x', 0);

    Polynomial poly1(terms1, 3);

    Term terms2[2];
    terms2[0] = Term(5, 'x', 2);
    terms2[1] = Term(1, 'x', 1);

    Polynomial poly2(terms2, 2);

    cout << poly1 << endl;
    cout << poly2 << endl;
    cout << poly1 + poly2 << endl;
    cout << poly1 - poly2 << endl;
    cout << poly1 * poly2 << endl;

    cout << (poly1 == poly2) << endl;
}