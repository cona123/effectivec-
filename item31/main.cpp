//#include "Person.h"
#include <iostream>
// #include "handle/person.h"
// #include "handle/personImpl.h"
#include "interface/person.h"
int main()
{
    std::shared_ptr<Person> realperson = Person::create("a", "199002221", "dfdfdf");
    std::cout << realperson->name();
    // std::shared_ptr<Person> person  = std::make_shared<Person>("a", "199002221", "dfdfdf");
    // std::cout << person->name();
}