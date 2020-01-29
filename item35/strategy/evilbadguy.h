#ifndef EVILBADGUY_H_
#define EVILBADGUY_H_
#include "gamecharacter.h"
class evilBadGuy : public GameCharacter {
 public:
  typedef int (*HealthCalcFunc)(const GameCharacter&);
  explicit evilBadGuy(HealthCalcFunc hcf = defaultHealthCalc): GameCharacter(hcf) {

  }
};
#endif