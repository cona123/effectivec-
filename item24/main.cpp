#include "rational.h"
int main()
{
    Rational a(1,3);
    Rational b(3,5);
    Rational c = a * b;
    c.getval();
    Rational d = a * 2;
    d.getval();
    Rational e = 2 * a;
    e.getval();
}