#include "Transaction.h"
Transaction::Transaction()
{
    init();
}

void BuyTransaction::logTransation() const
{
    std::cout<<"BuyTransaction::logTransaction"<<std::endl;
}