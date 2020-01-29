#ifndef HEROCHARACTER_H_
#define HEROCHARACTER_H_
#include "gamecharacter.h"
class heroCharacter : public GameCharacter {
 private:
  virtual int doHealthValue() const {
    std::cout << "derived get health"<<std::endl;
    return 20;
  }
};
#endif