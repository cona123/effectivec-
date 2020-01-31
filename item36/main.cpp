#include "base.h"
int main()
{
  D x;
  B* pb = &x; // pointer to base class 
  pb->mf();   // pointer will run base class function

  D* pd = &x; // pointer to derived class 
  pd->mf();  // pointer will run derived class function
}