#include "rectangle.h"
int main()
{
  Shape *shape = new Shape;
  shape->draw();
  Shape *shape2 = new Rectangle;
  shape2->draw();
}