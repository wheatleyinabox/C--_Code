// Rational.h

class Rational 
{
    private:
        int p,q;
    public:
        Rational(int numerator = 0, in denominator = 1);
        Rational operator*(const Rational &rhs) const;
        double toDouble() const;
};

// function with no scope
// const ONLY FOR MEMBER FUNCTIONS!
friend Rational operator*(int lhs, const Rational &rhs);
friend ostream &operator<<(ostream &lhsa, const Rational &rhs);