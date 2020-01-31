#include "evilbadguy.h"
short slowhealthfunc(const GameCharacter&) {
  std::cout<< "slowhealthfunc" <<std::endl;
  return 5;
}

int fasthealthfunc(const GameCharacter& gc) { 
  std::cout<< "fasthealthfunc" <<std::endl;
  return 20;
}

class HealthCalculator {  // part <1>
  int operator()(const GameCharacter&) const {
    std::cout<< "HealthCalculator operator" <<std::endl;
    return 222;  
  }
};

class Gamelevel
{
 public:
  float health(const GameCharacter&) const {
    std::cout<< "Gamelevel health" <<std::endl;
    return 222;
  }
};


int main()
{
  evilBadGuy eb1(slowhealthfunc);
  eb1.healthValue();
  Gamelevel gl;
  evilBadGuy eb2(std::bind(&Gamelevel::health,
    gl,std::placeholders::_1));
  eb2.healthValue();
  //HealthCalculator hc;
  HealthCalculator hcc;
  evilBadGuy eb3 = evilBadGuy(hcc); // user part <1>
  eb3.healthValue();  // error message : compiler error
  //error: request for member ‘healthValue’ in ‘eb3’,
  // which is of non-class type ‘evilBadGuy(HealthCalculator (*)())’

  //eb3.healthValue();
  return 0;
}