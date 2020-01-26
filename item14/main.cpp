#include "smartmutex.h"
int main()
{
    std::cout<<"1"<<std::endl;
    std::mutex lock1;
    {
        Lock m1(&lock1);
        Lock m2(m1);
    }
    std::cout<<"2"<<std::endl;
}