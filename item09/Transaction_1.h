#ifndef TRANSACTION_1_H
#define TRANSACTION_1_H
#include <iostream>
#include <string>
class Transaction {
    public:
        explicit Transaction(const std::string s){
            logTransaction(s);
        }
        void logTransaction(const std::string s) const{
            std::cout<<"Transaction log transcation:"<<s<<std::endl;
        };
};

class BuyTransaction:public Transaction {
    public:
        BuyTransaction(std::string s):Transaction(createLogString(s))
        {

        }
    private:
        static std::string createLogString(std::string s){
            return s;
        }
};

#endif