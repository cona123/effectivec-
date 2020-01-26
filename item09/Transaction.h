#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <iostream>
class Transaction {
    public:
        Transaction();
        virtual void logTransaction() const{
            std::cout<<"Transaction log transcation"<<std::endl;
        };
    private:
        void init()
        {
            logTransaction();
        }
};

class BuyTransaction:public Transaction {
    public:
        virtual void logTransation() const;
};

#endif