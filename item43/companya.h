#ifndef COMPANYA_H_
#define COMPANYA_H_
#include <iostream>
#include <string>
class CompanyA {
 public:
  void sendCleartext(const std::string& msg) {
    std::cout<< "company a sendCleartext"<<msg<<std::endl;
  }
  void sendencrypted(const std::string& msg) {
    std::cout<< "company a sendencrypted"<<msg<<std::endl;
  }
};
#endif