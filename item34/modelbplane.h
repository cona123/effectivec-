#ifndef MODELBPLANE_H_
#define MODELBPLANE_H_
#include "airplane.h"
#include <iostream>
#include <string>
class ModelbPlane : public Airplane {
 public:
  virtual void fly(const std::string& destination) {
    std::cout<< "modelb fly" << std::endl;
  }
};
#endif