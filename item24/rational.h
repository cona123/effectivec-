#ifndef RATIONAL_H_
#define RATIONAL_H_
#include<iostream>
class Rational {
  public:
    Rational(int numberator = 0, int denominator = 1) {
        n = numberator;
        d = denominator;
    }
    void getval(){
        std::cout<< "n is "<< n<< std::endl;
        std::cout<< "d is "<< d<< std::endl;
    }
    int getn() const {
      return n;
    }
    int getd() const {
      return d;
    }
  private:
    int n;
    int d;
  // friend const Rational operator* (const Rational& lhs, const Rational& rhs); { if use friend,use lhs.n,not use friend,use lhs.getn()
  //     return Rational(lhs.n * rhs.n, lhs.d * rhs.d);
  // }
};

const Rational operator* (const Rational& lhs, const Rational& rhs);
#endif