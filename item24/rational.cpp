#include "rational.h"
const Rational operator* (const Rational& lhs, const Rational& rhs) {
    return Rational(lhs.getn() * rhs.getn(), 
                    lhs.getd() * rhs.getd());
}