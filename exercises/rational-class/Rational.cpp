#include "Rational.h"
#include <ostream>
#include "gcd.h"
// used to reduce fraction
void Rational::reduce()
{
    int greatestCommonDivisor = gcd(num, den);
    num /= greatestCommonDivisor;
    den /= greatestCommonDivisor;
}

Rational::Rational(int n, int d)
{
    num = n;
    den = d;
}

// adds two rational numbers
Rational &Rational::operator+=(const Rational &a)
{
    int x = num;
    int y = den;
    int w = a.num;
    int z = a.den;
    num = x * z + y * w;
    den = y * z;

    reduce();
    return *this;
}
// subtracts two rational numbers
Rational &Rational::operator-=(const Rational &a) {
    int x = num;
    int y = den;
    int w = a.num;
    int z = a.den;
    // i think we might be able to reduce first than determine if dens are equal
    if (y == z) {
        num = x - w;
    }
    //! TODO: add support for subtracting two rationals w different dens
    reduce();
    return *this;
}

Rational &Rational::operator*=(const Rational &a) {
    int x = num;
    int y = den;
    int w = a.num;
    int z = a.den;

    num = x * w;
    den = y * z;

    reduce();
    return *this;
}

Rational &Rational::operator/=(const Rational &a) {
    int x = num;
    int y = den;
    int w = a.num;
    int z = a.den;

    num = x * z;
    den = y * w;

    reduce();
    return *this;
}

// define std::ostream& operator<<(std::ostream& out, const Rational& a)
std::ostream &operator<<(std::ostream &out, const Rational &a)
{
    out << a.num << "/" << a.den;
    return out;
}