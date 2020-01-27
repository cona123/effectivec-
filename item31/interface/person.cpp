#include "person.h"
std::shared_ptr<Person> Person::create(const std::string& name,
    const std::string& birthday,
    const std::string& addr){
        return std::make_shared<RealPerson>(name, birthday, addr);
    }