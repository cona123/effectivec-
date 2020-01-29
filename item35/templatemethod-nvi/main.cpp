#include "herocharacter.h"
int main()
{
  GameCharacter *cha = new heroCharacter;
  std::cout << cha->healthValut();
}