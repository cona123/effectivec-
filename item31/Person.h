#ifndef PERSON_H_
#define PERSON_H_
#include<string>
#include<memory>

class RealPerson;

class Person
{
private:
    /* data */
public:
    static std::shared_ptr<Person> create(const std::string& name,
    const std::string& birthday,
    const std::string& addr);
    virtual ~Person() {}
    virtual std::string name() const = 0;
    virtual std::string birthdate() const = 0;
    virtual std::string address() const = 0;
};

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
