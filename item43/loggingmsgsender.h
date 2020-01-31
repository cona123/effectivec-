#ifndef LOGGINGMSGSENDER_H_
#define LOGGINGMSGSENDER_H_
#include "msgsender.h"
template<typename T>
class LoggingMsgSender: public MsgSender<T> {
 public:
  using MsgSender<T>::sendclear; //method2
  void sendClearMsg(const std::string& info) {
    sendclear(info); // using this->sendclear is method1
  }
};
#endif