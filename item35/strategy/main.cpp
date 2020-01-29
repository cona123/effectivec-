#include "evilbadguy.h"
int slowhealthfunc(const GameCharacter& gc) {
  std::cout<< "slowhealthfunc" <<std::endl;
  return 5;
}

int fasthealthfunc(const GameCharacter& gc) {
  std::cout<< "fasthealthfunc" <<std::endl;
  return 20;
}

int main()
{
  evilBadGuy eb1(slowhealthfunc);
  eb1.healthValue();
  evilBadGuy eb2(fasthealthfunc);
  eb2.healthValue();
  evilBadGuy eb3;
  eb3.healthValue();
  return 0;
}