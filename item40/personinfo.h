#ifndef PERSONINFO_H_
#define PERSONINFO_H_
#include <string>
#include <iostream>
#include <cstring>
class PersonInfo {
 public:
  explicit PersonInfo(std::string pid);
  virtual ~PersonInfo();
  virtual const char* theName() const {
    static char value[1024];
    std::strcpy(value,valueDelimOpen());
    std::strcat(value,valueDelimClose());
    return value;
  }
  virtual const char* theBirthDate() const {
    static char value[1024];
    std::strcpy(value,valueDelimOpen());
    std::strcat(value,valueDelimClose());
    return value;
  }
 private:
  virtual const char* valueDelimOpen() const {
    return "[";
  }
  virtual const char* valueDelimClose() const {
    return "]";
  }
};
#endif