#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "shape.h"
class Rectangle: public Shape {
 public:
 private:
  virtual void doDraw(ShapeColor color) const {
    std::cout<<"Rectangle color"<<std::endl;
  }
};
#endif