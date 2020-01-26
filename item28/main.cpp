#include "point.h"
int main() {
    Point coord1(0, 0);
    Point coord2(100, 100);
    const Rectangle rec(coord1, coord2);
    rec.upperLeft(); ////if not want user to change , upperleft() use const
    rec.upperLeft();

}