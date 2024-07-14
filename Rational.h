#pragma once
#include <iostream>
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;
    static int instanceCount;

    int findGCD(int a, int b);

public:
    Rational();
    Rational(int num);
    Rational(int num, int denom);
    ~Rational();

    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int num);
    void setDenominator(int denom);
    Rational simplify() const;
    static int getInstanceCount();

    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    bool operator>(const Rational& other) const;
    bool operator<(const Rational& other) const;
    bool operator>=(const Rational& other) const;
    bool operator<=(const Rational& other) const;
    Rational operator++();
    Rational operator--();
    Rational operator-();
    Rational operator+();
    bool operator!() const;
    Rational& operator=(const Rational& other);
    Rational& operator+=(const Rational& other);
    Rational& operator-=(const Rational& other);
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);

    // Declare friend functions for stream operators
    friend ostream& operator<<(ostream& out, const Rational& rational);
    friend istream& operator>>(istream& in, Rational& rational);
};
