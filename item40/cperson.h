#ifndef CPERSON_H_
#define CPERSON_H_
#include "person.h"
#include "personinfo.h"
class CPerson:public Person, private PersonInfo {
 public:
  explicit CPerson(std::string pid):PersonInfo(pid) {}
  virtual std::string name() const {
    return PersonInfo::theName();
  }
  virtual std::string birthday() const {
    return PersonInfo::theBirthDate();
  }
 private:
  const char* valueDelimOpen() const {return "";}
  const char* valueDelimClose() const {return "";}
};
#endif