#include "TimeKeeper.h"
int main()
{
    TimeKeeper *ptk = new AtomicClock;//if TImerkeeper not add virtual destructed ,atomicclock will not run
    delete ptk;
}