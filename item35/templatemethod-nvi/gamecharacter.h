#ifndef GAMECHARACTER_H_
#define GAMECHARACTER_H_
#include <iostream>
class GameCharacter
{
public:
  int healthValut() const {
    int retval = doHealthValue();
    return retval;
  }
 private:
  virtual int doHealthValue() const {
    std::cout << "base get health"<<std::endl;
    return 10;
  }
};
#endif

