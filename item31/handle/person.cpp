#include "person.h"
#include "personImpl.h"
std::string Person::name() const {
    return pImpl->name();
}
std::string Person::birthDate() const {
    return pImpl->birthDate();
}
std::string Person::address() const {
    return pImpl->address();
}