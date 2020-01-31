#include "myset.h"
#include <iostream>
int main()
{
  MySet<int> ms;
  ms.insert(1);
  ms.insert(1);
  std::cout<< ms.size() <<std::endl;
  std::cout<< ms.member(1) <<std::endl;
  std::cout<< ms.member(2) <<std::endl;
  ms.remove(2);
  ms.remove(1);
  std::cout<< ms.size() <<std::endl;
}