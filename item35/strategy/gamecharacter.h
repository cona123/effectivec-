#ifndef GAMECHARACTER_H_
#define GAMECHARACTER_H_
#include <iostream>
class GameCharacter;
int defaultHealthCalc(const GameCharacter& gc);
typedef 
class GameCharacter
{
 public:
  typedef int (*HealthCalcFunc)(const GameCharacter&);
  explicit GameCharacter(HealthCalcFunc hcf = defaultHealthCalc) : healthFunc(hcf) {

  }
  int healthValue() const {
    return healthFunc(*this);
  }
 private:
  HealthCalcFunc healthFunc;
};

#endif


