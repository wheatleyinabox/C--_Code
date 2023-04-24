// Rational.cpp

#include "Rational.h"

Rational(int numerator, int denominator)
{
    assert(denominator != 0);
    p = numerator;
    q = denominator;
}

Rational Rational::operator*(const Rational &rhs) const
{
    return Rational(p * rhs.q, q * rhs.p);
}

double Rational::toDouble() const
{
    return static_cast<double>(p) / q;
}