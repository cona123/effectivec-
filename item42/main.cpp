#include<iostream>
class A {
  public:
    int a;
};

class B:public A::a {

};

int main() {
  A *a = new B;
  
}