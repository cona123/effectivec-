#ifndef PRETTYMENU_H
#define PRETTYMENU_H
#include <memory>
#include <mutex>
#include <iostream>

void Unlock(std::mutex* pm1); //{
//     pm1->unlock();
// }

class Lockguard {
    public:
        explicit Lockguard(std::mutex* pm) : pm_(pm,Unlock)
        {
            pm_.get()->lock();
        }
    private:
        std::shared_ptr<std::mutex> pm_;
};


struct PMImpl {
    std::shared_ptr<char> bgImage;
    int imageChanges;
    /* data */
};


class PrettyMenu {
private:
    /* data */
public:
    PrettyMenu(std::shared_ptr<PMImpl> pImpl1) {
        pImpl = pImpl1;
    }
    void print() {
        std::cout<< *pImpl->bgImage.get();
        std::cout<< "imagechanges is "<<pImpl->imageChanges<<std::endl;
    }
    void changebackground(std::shared_ptr<PMImpl> pImpl);
private:
    std::shared_ptr<PMImpl> pImpl;
    std::mutex mutex1;
};

#endif


