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
  private:
    int n;
    int d;
  friend const Rational operator* (const Rational& lhs, const Rational& rhs) {
      return Rational(lhs.n * rhs.n, lhs.d * rhs.d);
  }
};
#endif