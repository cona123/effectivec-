#include "prettymenu.h"
//#include "../item14/smartmutex.h"
void Unlock(std::mutex* pm1) {
    pm1->unlock();
}

void PrettyMenu::changebackground(std::shared_ptr<PMImpl> pImpl) {
    using std::swap;
    Lockguard m1(&this->mutex1);
    std::shared_ptr<PMImpl> temp(new PMImpl(*this->pImpl));
    temp->bgImage = pImpl->bgImage;
    temp->imageChanges = pImpl->imageChanges;
    swap(temp, pImpl);
}