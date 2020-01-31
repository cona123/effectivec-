#ifndef EMPTY_H_
#define EMPTY_H_
class empty {};
class A : private empty {
  private:
    int a;
};
class B {
  private:
    int a;
    empty b;
};
#endif
