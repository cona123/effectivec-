#ifndef TIMEKEEPER_H
#define TIMEKEEPER_H
#include<iostream>
class TimeKeeper {
    public:
        TimeKeeper(){
            std::cout<<"timekeeper constructed"<<std::endl;
        }
        virtual ~TimeKeeper(){
            std::cout<<"timekeeper destructed"<<std::endl;
        }
};

class AtomicClock:public TimeKeeper {
    public:
        AtomicClock(){
            std::cout<<"atomicclock constructed"<<std::endl;
        }
        ~AtomicClock(){
            std::cout<<"atomicclock destructed"<<std::endl;
        }
};
#endif