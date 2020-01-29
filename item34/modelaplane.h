#ifndef MODELAPLANE_H_
#define MODELAPLANE_H_
#include "airplane.h"
#include <iostream>
#include <string>
class ModelaPlane : public Airplane {
 public:
  virtual void fly(const std::string& destination) {
    std::cout<< "modela fly" << std::endl;
    Airplane::fly(destination);
  }
};
#endif