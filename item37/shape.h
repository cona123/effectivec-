#ifndef SHAPE_H_
#define SHAPE_H_
#include <iostream>
class Shape {
 public:
  enum ShapeColor {
    kRed,
    kGreen,
    kBlue
  };
  void draw(ShapeColor color = kRed) const {
    doDraw(color);
  }
 private:
  virtual void doDraw(ShapeColor color) const {
    std::cout<< "shape dodraw"<<std::endl;
  }
};
#endif