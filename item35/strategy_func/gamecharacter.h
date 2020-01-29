#ifndef GAMECHARACTER_H_
#define GAMECHARACTER_H_
#include <iostream>
#include <functional>
class GameCharacter;
int defaultHealthCalc(const GameCharacter& gc);
typedef 
class GameCharacter
{
 public:
  typedef std::function<int (const GameCharacter&)> HealthCalcFunc;
  explicit GameCharacter(HealthCalcFunc hcf = defaultHealthCalc) : healthFunc(hcf) {

  }
  int healthValue() const {
    return healthFunc(*this);
  }
 private:
  HealthCalcFunc healthFunc;
};

#endif


