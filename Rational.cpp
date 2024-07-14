#include "Rational.h"
#include <iostream>
using namespace std;

int Rational::instanceCount = 0;

Rational::Rational() : numerator(0), denominator(1)
{
    instanceCount++;
}

Rational::Rational(int num) : numerator(num), denominator(1)
{
    instanceCount++;
}

Rational::Rational(int num, int denom)
{
    if (denom == 0)
    {
        cout << "Error: Denominator cannot be zero. Setting denominator to 1." << endl;
        denom = 1;
    }

    if (denom < 0)
    {
        num = -num;
        denom = -denom;
    }

    int gcd = findGCD(abs(num), abs(denom));

    numerator = num / gcd;
    denominator = denom / gcd;

    instanceCount++;
}

Rational::~Rational()
{
    instanceCount--;
}

int Rational::findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int Rational::getInstanceCount()
{
    return instanceCount;
}

int Rational::getNumerator() const
{
    return numerator;
}

int Rational::getDenominator() const
{
    return denominator;
}

void Rational::setNumerator(int num)
{
    numerator = num;
}

void Rational::setDenominator(int denom)
{
    if (denom != 0)
    {
        denominator = denom;
    }
    else
    {
        cout << "Error: Denominator cannot be set to zero." << endl;
    }
}

Rational& Rational::operator+=(const Rational& other)
{
    *this = *this + other;
    return *this;
}

Rational Rational::operator+(const Rational& other) const
{
    return Rational((numerator * other.denominator) + (other.numerator * denominator), denominator * other.denominator);
}

Rational Rational::operator-(const Rational& other) const
{
    return Rational((numerator * other.denominator) - (other.numerator * denominator), denominator * other.denominator);
}

Rational Rational::operator*(const Rational& other) const
{
    return Rational(numerator * other.numerator, denominator * other.denominator);
}

Rational Rational::operator/(const Rational& other) const
{
    if (other.numerator == 0)
    {
        cout << "Error: Division by zero is not allowed. Returning zero." << endl;
        return Rational();
    }
    return Rational(numerator * other.denominator, denominator * other.numerator);
}

bool Rational::operator==(const Rational& other) const
{
    if ((numerator == other.numerator) && (denominator == other.denominator))
    {
        return true;
    }
    return false;
}

bool Rational::operator!=(const Rational& other) const
{
    if (!(*this == other))
    {
        return true;
    }
    return false;
}

bool Rational::operator>(const Rational& other) const
{
    if ((numerator * other.denominator) > (other.numerator * denominator))
    {
        return true;
    }
    return false;
}

bool Rational::operator<(const Rational& other) const
{
    if ((numerator * other.denominator) < (other.numerator * denominator))
    {
        return true;
    }
    return false;
}

bool Rational::operator>=(const Rational& other) const
{
    if (!(*this < other))
    {
        return true;
    }
    return false;
}

bool Rational::operator<=(const Rational& other) const
{
    if (!(*this > other))
    {
        return true;
    }
    return false;
}

Rational Rational::operator++()
{
    numerator += denominator;
    return *this;
}

Rational Rational::operator--()
{
    numerator -= denominator;
    return *this;
}

Rational Rational::operator-()
{
    return Rational(-numerator, denominator);
}

Rational Rational::operator+()
{
    return *this;
}

bool Rational::operator!() const
{
    if ((numerator == 0))
    {
        return true;
    }
    return false;
}

Rational& Rational::operator=(const Rational& other)
{
    if (this != &other)
    {
        numerator = other.numerator;
        denominator = other.denominator;
    }
    return *this;
}

Rational& Rational::operator-=(const Rational& other)
{
    *this = *this - other;
    return *this;
}

Rational& Rational::operator*=(const Rational& other)
{
    *this = *this * other;
    return *this;
}

Rational& Rational::operator/=(const Rational& other)
{
    *this = *this / other;
    return *this;
}

ostream& operator<<(ostream& out, const Rational& rational)
{
    out << rational.getNumerator();
    if (rational.getDenominator() != 1)
    {
        out << '/' << rational.getDenominator();
    }
    return out;
}
