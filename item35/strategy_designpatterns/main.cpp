#include "gamecharacter.h"
#include "healthcalcfunc.h"
#include <iostream>
int main()
{
  GameCharacter gc;
  gc.heathValue();

  badHealthCalcFunc bhcf;
  BadGameCharacter bgc(&bhcf);
  bgc.heathValue();
}