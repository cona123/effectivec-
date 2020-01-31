#include "cperson.h"
#include <iostream>
int main()
{
  Person *person = new CPerson("name");
  std::cout<< "name is "<< person->name()<<std::endl;

}