#ifndef TERM_H
#define TERM_H
#include <iostream>
using namespace std;

class Term
{
private:
    double coefficient;
    char variable;
    int exponent;
public:
    Term();
    Term(double coe, char var, int exp);
    Term(const Term& other);

    double getCoefficient() const;
    char getVariable() const;
    int getExponent() const;

    void setCoefficient(double coe);
    void setVariable(char var);
    void setExponent(int exp);

    Term operator+(const Term& other);
    Term operator-(const Term& other);
    Term operator*(const Term& other);
    bool operator==(const Term& other) const;
    friend ostream& operator<< (ostream& out, const Term& term);
};
#endif