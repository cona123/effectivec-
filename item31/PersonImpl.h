#ifndef PERSONIMPL_H_
#define PERSONIMPL_H_
#include <memory>
#include <iostream>
#include <string>

class PersonImpl;
class Person {
    public:
        Person(const std::string& name, const std::string& birthday, 
        const std::string& addr) {
            pImpl = std::make_shared<PersonImpl>(name, birthday, addr);
        }
        std::string name() const;
        std::string birthDate() const;
        std::string address() const;
    private:
        std::shared_ptr<PersonImpl> pImpl;
};

class PersonImpl {
    public:
        PersonImpl(const std::string& name, const std::string& birthday, 
        const std::string& addr): name_(name), birthDate_(birthday), address_(addr) {

        }
        std::string name() const {
            return name_;
        }
        std::string birthDate() const {
            return birthDate_;
        };
        std::string address() const {
            return address_;
        }
    private:
        std::string name_;
        std::string birthDate_;
        std::string address_;
};
#endif