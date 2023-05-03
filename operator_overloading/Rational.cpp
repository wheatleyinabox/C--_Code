// Rational.cpp

#include "Rational.h"

Rational(int numerator, int denominator)
{
    assert(denominator != 0);
    p = numerator;
    q = denominator;
}

Rational operator*(const Rational &rhs) const
{
    return Rational(p * rhs.q, q * rhs.p);
}

Rational operator*(int lhs, const Rational &rhs)
{
    return Rational(lhs) * rhs;
}

double Rational::toDouble() const
{
    return static_cast<double>(p) / q;
}