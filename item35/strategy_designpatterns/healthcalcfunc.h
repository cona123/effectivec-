#ifndef HEALTHCALCFUNC_H_
#define HEALTHCALCFUNC_H_
#include <iostream>
class GameCharacter;
class HealthCalcFunc {
 public:
  virtual int calc(const GameCharacter& gc) const {
    std::cout<< "HealthCalcFunc calc" <<std::endl;
    return 12;
  }
};

class badHealthCalcFunc : public HealthCalcFunc {
 public:
  virtual int calc(const GameCharacter& gc) const {
    std::cout<< "badHealthCalcFunc calc" <<std::endl;
    return 22;
  }
};

#endif