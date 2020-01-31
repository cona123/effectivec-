#ifndef MSGSENDER_H_
#define MSGSENDER_H_
#include <string>
template<typename T> 
class MsgSender {
 public:
  void sendclear(const std::string& info) {
    T c;
    c.sendCleartext(info);
  }
};
#endif