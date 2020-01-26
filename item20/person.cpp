#include "person.h"
Person::Person() {
    std::cout<< "Person constructed"<< std::endl;
}

Person::~Person() {
    std::cout<< "Person destructed"<< std::endl;
}

std::string Person::name() const {
    std::cout<< "person name()" <<std::endl;
    return name_;
}

void Person::gettype() const{
    std::cout<< "type is Person"<<std::endl;
}

Student::Student() {
    std::cout<< "Student constructed"<< std::endl;
}

Student::~Student() {
    std::cout<< "Student destructed"<< std::endl;
}

void Student::gettype() const {
    std::cout<< "type is Student"<<std::endl;
}

bool ValidateStudent( const Student& s) {
    std::cout<<"ValidateStudent"<< std::endl;
}

// void getpersontype(Person s) {//param is Student
//     //s.name();
//     s.gettype(); // PERSON
//     return;
// }

void getpersontype(const Person& s) { //param is Student
    s.name();
    s.gettype();//Student
    return; 
}