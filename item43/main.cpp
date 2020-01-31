#include "companya.h"
#include "companyb.h"
#include "msgsender.h"
#include "loggingmsgsender.h"
int main()
{
  //CompanyA a;
  LoggingMsgSender<CompanyA> tempa;
  tempa.sendClearMsg("hello");
  LoggingMsgSender<CompanyB> tempb;
  tempb.sendClearMsg("hello2");
}