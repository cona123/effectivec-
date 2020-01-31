#ifndef BASE_H_
#define BASE_H_
#include <iostream>
class B {
 public:
  void mf() {
    std::cout<<"b mf" <<std::endl;
  }
};

class D : public B{
 public:
  void mf() {
    std::cout<<"d mf" <<std::endl;
  }
};

#endif