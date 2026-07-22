#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include "term.h"

class Polynomial
{
private:
    Term* terms;
    int numberOfTerms;
public:
    Polynomial();
    Polynomial(Term* t, int size);
    Polynomial(const Polynomial& other);
    ~Polynomial();

    Term* getTerms() const;
    int getNumberOfTerms() const;

    void setTerms(Term* t, int size);

    Polynomial operator+ (const Polynomial& other);
    Polynomial operator- (const Polynomial& other);
    Polynomial operator* (const Polynomial& other);
    bool operator== (const Polynomial& other) const;
    friend ostream& operator<< (ostream& out, const Polynomial& poly);
};
#endif