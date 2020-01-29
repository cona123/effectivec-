#ifndef GAMECHARACTER_H_
#define GAMECHARACTER_H_
#include "healthcalcfunc.h"
HealthCalcFunc defaulthealthcalcfunc;
class GameCharacter {
 public:
  explicit GameCharacter(HealthCalcFunc* phcf = &defaulthealthcalcfunc) : phealthcalcfunc_(phcf) {

  }
  int heathValue() const {
    return phealthcalcfunc_->calc(*this);
  }

 private:
  HealthCalcFunc* phealthcalcfunc_;
};

class BadGameCharacter:public GameCharacter {
 public:
  explicit BadGameCharacter(HealthCalcFunc* phcf = &defaulthealthcalcfunc) : phealthcalcfunc_(phcf) {

  }
  int heathValue() const {
    return phealthcalcfunc_->calc(*this);
  }

 private:
  HealthCalcFunc* phealthcalcfunc_;
};


#endif