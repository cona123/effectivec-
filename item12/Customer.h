#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
void logCall(const std::string& funcname);
class Customer {
    public:
        Customer(const std::string s):name(s)
        {

        }
        Customer(const Customer& rhs);
        Customer& operator=(const Customer& rhs);
    private:
        std::string name;
};

class PriorityCustomer:public Customer {
    public:
        PriorityCustomer(const int s):Customer("a"),priority(s)
        {

        }
        PriorityCustomer(const PriorityCustomer& rhs);
        PriorityCustomer& operator=(const PriorityCustomer& rhs);
    private:
        int priority;    
};
#endif