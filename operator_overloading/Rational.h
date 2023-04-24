// rational.h

class Rational 
{
    private:
        int p,q;
    public:
        Rational(int numerator = 0, in denominator = 1);
        Rational operator*(const Rational &rhs) const;
        double toDouble() const;
}