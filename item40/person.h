#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>
class Person {
 public:
  virtual ~Person();
  virtual std::string name() const = 0;
  virtual std::string birthday() const = 0;
};
#endif