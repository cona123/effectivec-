#ifndef AIRPLANE_H_
#define AIRPLANE_H_
#include <iostream>
#include <string>
class Airplane {
 public:
  virtual void fly(const std::string& destination) = 0;
};
#endif