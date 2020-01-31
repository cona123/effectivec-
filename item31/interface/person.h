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



#endif
