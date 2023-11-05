#include "Rational.h"
#include <ostream>
#include "gcd.h"
//
void Rational::reduce()
{
    int greatestCommonFactor = gcd(num, den);
    num /= greatestCommonFactor;
    den /= greatestCommonFactor;
}

Rational::Rational(int n, int d)
{
    num = n;
    den = d;
}

// define Rational& Rational::operator+=(const Rational& a)
Rational &Rational::operator+=(const Rational &a)
{
    // adds
    int x = num;
    int y = den;
    int w = a.num;
    int z = a.den;
    num = x * z + y * w;
    den = y * z;

    reduce();
    return *this;
}

// define std::ostream& operator<<(std::ostream& out, const Rational& a)
std::ostream &operator<<(std::ostream &out, const Rational &a)
{
    out << a.num << "/" << a.den;
    return out;
}