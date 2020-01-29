#include "base.h"
int main()
{
    Derived d;
    int x = 0;
    d.mf1();
    d.mf1(x);
    d.mf2();
    d.mf3();
    d.mf3(x);
}