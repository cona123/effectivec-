#ifndef SMARTMUTEX_H_
#define SMARTMUTEX_H_
#include<iostream>
#include<mutex>
#include<memory>
void Unlock(std::mutex* pm) {
    std::cout<<"unlock"<<std::endl;
    pm->unlock();
}
class Lock{
    public:
        explicit Lock(std::mutex* pm):mutexptr(pm,Unlock)
        {
            std::cout<<"lock"<<std::endl;
            mutexptr.get()->lock();    
        }
    private:
        std::shared_ptr<std::mutex> mutexptr;
};

#endif