#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
class Person {
  public:
    Person();
    std::string name() const;
    virtual ~Person();
    virtual void gettype() const;
  private:
    std::string name_;
    std::string address_;
};

class Student: public Person {
  public:
    Student();
    ~Student();
    virtual void gettype() const;
  private:
    std::string schoolname_;
    std::string schooladdress_;
};

bool ValidateStudent(const Student& s);

//void getpersontype(Person s);
void getpersontype(const Person& s);

#endif