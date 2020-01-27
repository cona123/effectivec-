#ifndef PERSONIMPLFWD_H_
#define PERSONIMPLFWD_H_
#include  <string>
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