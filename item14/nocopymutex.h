#ifndef NOCOPYMUTEX_H_
#define NOCOPYMUTEX_H_
#include<iostream>
#include<mutex>
class Lock{
    public:
        explicit Lock(std::mutex* pm):mutexptr(pm)
        {
            std::cout<<"lock"<<std::endl;
            mutexptr->lock();    
        }
        ~Lock()
        {
            std::cout<<"unlock"<<std::endl;
            mutexptr->unlock();
        }
        Lock(Lock& lock) = delete;
    private:
        std::mutex *mutexptr;
};

#endif