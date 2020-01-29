#ifndef BASE_H_
#define BASE_H_
#include <iostream>
class Base
{
private:
    int x;
public:
    virtual void mf1() = 0;
    virtual void mf1(int a) {
        std::cout << "base mf1 int "<< std::endl;
    }
    virtual void mf2() {
        std::cout << "base mf2 "<< std::endl;
    }
    void mf3() {
        std::cout << "base mf3 "<< std::endl;
    }
    void mf3(double) {
        std::cout << "base mf3 int "<< std::endl;
    }
};

class Derived:public Base {
public:
    using Base::mf1;
    using Base::mf3;
    virtual void mf1() {
        std::cout << "Derived mf1 int "<< std::endl;
    }
    void mf3() {
        std::cout << "Derived mf3 "<< std::endl;
    }
    void mf4() {
        std::cout << "Derived mf4 int "<< std::endl;
    }
};
#endif