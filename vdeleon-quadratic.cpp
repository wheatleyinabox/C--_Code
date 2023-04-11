/*
    Name:        DeLeon, Val
    Project:     1
    Due:         02/10/23
    Course:      cs2560-01-sp23
    Description: Solving a polynomial with the quadratic equation and
                 verifying it can be solved with said equation & isn't
                 imaginary.
*/
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double a, b, c, discriminant, qe_pos, qe_neg;
    cout << "Quadratic Equation by V. DeLeon" << endl;
    cout << "Enter values for a b c? ";
    cin >> a >> b >> c;
    cout << endl;
    discriminant = pow(b, 2) - 4*a*c;
    if(a == 0)
    {
        cout << "Not a quadratic equation." << endl;
    }
    else if(discriminant < 0)
    {
        cout << "Roots are imaginary." << endl;
    }
    else
    {
        qe_pos = (-b + sqrt(discriminant)) / (2*a);
        qe_neg = (-b - sqrt(discriminant)) / (2*a);
        cout << setprecision(3) << fixed;
        cout << "x1 = " << qe_pos << endl;
        cout << "x2 = " << qe_neg << endl;
    }
    return 0;
}