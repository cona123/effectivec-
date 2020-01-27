#ifndef REALPERSON_H_
#define REALPERSON_H_

#include "person.h"
class RealPerson: public Person {
    public:
        RealPerson(const std::string& name,
        const std::string& birthday,
        const std::string& addr):name_(name), birthdate_(birthday), address_(addr) {

        }
        virtual ~RealPerson()
        {}
        std::string name() const {
            return name_;
        }
        std::string birthdate() const {
            return birthdate_;
        };
        std::string address() const {
            return address_;
        };
    private:
        std::string name_;
        std::string birthdate_;
        std::string address_;  
};
#endif