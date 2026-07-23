#include "term.h"

Term::Term()
{
    coefficient = 0;
    variable = 'x';
    exponent = 0;
}

Term::Term(double coe, char var, int exp)
{
    coefficient = coe;
    variable = var;
    exponent = exp;
}

Term::Term(const Term& other)
{
    coefficient = other.coefficient;
    variable = other.variable;
    exponent = other.exponent;
}


double Term::getCoefficient() const
{
    return coefficient;
}


char Term::getVariable() const
{
    return variable;
}


int Term::getExponent() const
{
    return exponent;
}


void Term::setCoefficient(double coe)
{
    coefficient = coe;
}


void Term::setVariable(char var)
{
    variable = var;
}


void Term::setExponent(int exp)
{
    exponent = exp;
}


Term Term::operator+(const Term& other)
{
    Term result;

    if(variable == other.variable && exponent == other.exponent)
    {
        result.coefficient = coefficient + other.coefficient;
        result.variable = variable;
        result.exponent = exponent;
    }
    return result;
}

Term Term::operator-(const Term& other)
{
    Term result;

    if(variable == other.variable && exponent == other.exponent)
    {
        result.coefficient = coefficient - other.coefficient;
        result.variable = variable;
        result.exponent = exponent;
    }
    return result;
}

Term Term::operator*(const Term& other)
{
    Term result;

    result.coefficient = coefficient * other.coefficient;
    result.variable = variable;
    result.exponent = exponent + other.exponent;

    return result;
}

bool Term::operator==(const Term& other) const
{
    return coefficient == other.coefficient &&
           variable == other.variable &&
           exponent == other.exponent;
}

ostream& operator<<(ostream& out, const Term& term)
{
    out << term.coefficient;

    if(term.variable != ' ')
    {
        out << term.variable;

        if(term.exponent != 0)
        {
            out << " ^" << term.exponent;
        }
    }
    return out;
}