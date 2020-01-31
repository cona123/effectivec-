#ifndef COMPANYB_H_
#define COMPANYB_H_
#include <iostream>
#include <string>
class CompanyB {
 public:
  void sendCleartext(const std::string& msg) {
    std::cout<< "company b sendCleartext"<<msg<<std::endl;
  }
  void sendencrypted(const std::string& msg) {
    std::cout<< "company b sendencrypted"<<msg<<std::endl;
  }
};
#endif