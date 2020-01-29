#ifndef BIRD_H_
#define BIRD_H_
#include <iostream>
#include <string>
class Bird {
    //virtual void fly();  // some type birds cannot fly;
};

class FlyingBird : public Bird {
    virtual void fly() {
        std::cout << "flying bird fly"<<std::endl;
    }
};

class Penguin : public Bird {
    // this class cannot use fly function
};

#endif