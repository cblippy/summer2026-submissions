#include "polynomial.h"

Polynomial::Polynomial()
{
    numberOfTerms = 0;
    terms = nullptr;
}

Polynomial::Polynomial(Term* t, int size)
{
    numberOfTerms = size;

    terms = new Term[numberOfTerms];

    for(int i = 0; i < numberOfTerms; i++)
    {
        terms[i] = t[i];
    }
}

Polynomial::Polynomial(const Polynomial& other)
{
    numberOfTerms = other.numberOfTerms;

    terms = new Term[numberOfTerms];

    for(int i = 0; i < numberOfTerms; i++)
    {
        terms[i] = other.terms[i];
    }
}

Polynomial::~Polynomial()
{
    delete[] terms;
}

Term* Polynomial::getTerms() const
{
    return terms;
}

int Polynomial::getNumberOfTerms() const
{
    return numberOfTerms;
}

void Polynomial::setTerms(Term* t, int size)
{
    delete[] terms;
    numberOfTerms = size;

    terms = new Term[numberOfTerms];

    for(int i = 0; i < numberOfTerms; i++)
    {
        terms[i] = t[i];
    }
}

Polynomial Polynomial::operator+ (const Polynomial& other)
{
    Polynomial result;
    int size = numberOfTerms + other.numberOfTerms;
    Term* temp = new Term[size];

    int count = 0;

    for(int i = 0; i < numberOfTerms; i++)
    {
        temp[count] = terms[i];
        count++;
    }

    for(int i = 0; i < other.numberOfTerms; i++)
    {
        bool combined = false;

        for(int j = 0; j < count; j++)
        {
            if(temp[j].getExponent() == other.terms[i].getExponent())
            {
                temp[j] = temp[j] + other.terms[i];
                combined = true;
                break;
            }
        }

        if(!combined)
        {
            temp[count] = other.terms[i];
            count++;
        }
    }
    result.setTerms(temp, count);

    delete[] temp;
    return result;
}


Polynomial Polynomial::operator- (const Polynomial& other)
{
    Polynomial result;

    Term* temp = new Term[numberOfTerms + other.numberOfTerms];

    int count = 0;


    for(int i = 0; i < numberOfTerms; i++)
    {
        temp[count] = terms[i];
        count++;
    }

    for(int i = 0; i < other.numberOfTerms; i++)
    {
        Term negative = other.terms[i];

        negative.setCoefficient(
            negative.getCoefficient() * -1
        );
        temp[count] = negative;
        count++;
    }
    result.setTerms(temp, count);

    delete[] temp;
    return result;
}

Polynomial Polynomial::operator* (const Polynomial& other)
{
    Polynomial result;

    Term* temp = new Term[numberOfTerms * other.numberOfTerms];

    int count = 0;

    for(int i = 0; i < numberOfTerms; i++)
    {
        for(int j = 0; j < other.numberOfTerms; j++)
        {
            temp[count] = terms[i] * other.terms[j];
            count++;
        }
    }
    result.setTerms(temp, count);

    delete[] temp;
    return result;
}

bool Polynomial::operator== (const Polynomial& other) const
{
    if(numberOfTerms != other.numberOfTerms)
    {
        return false;
    }

    for(int i = 0; i < numberOfTerms; i++)
    {
        if(!(terms[i] == other.terms[i]))
        {
            return false;
        }
    }
    return true;
}

ostream& operator<< (ostream& out, const Polynomial& poly)
{
    for(int i = 0; i < poly.numberOfTerms; i++)
    {
        if(i > 0 && poly.terms[i].getCoefficient() >= 0)
        {
            out << " + ";
        }

        out << poly.terms[i];
    }
    return out;
}