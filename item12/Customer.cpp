#include"Customer.h"

void logCall(const std::string& funcname) {
    std::cout<<funcname<<std::endl;
}
Customer::Customer(const Customer& rhs):name(rhs.name)
{
    logCall("customer copy constructor");
}

Customer& Customer::operator=(const Customer& rhs)
{
    logCall("customer copy constructor");
    name=rhs.name;
    return *this;
}

PriorityCustomer::PriorityCustomer(const PriorityCustomer& rhs):Customer(rhs),priority(rhs.priority)//customer(rhs) not customer("a"),use copy constructed
{
    logCall("PriorityCustomer copy constructor");
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer& rhs)
{
    logCall("customer copy constructor");
    Customer::operator=(rhs);//must add or customer part will not operator =
    priority=rhs.priority;
    return *this;
}