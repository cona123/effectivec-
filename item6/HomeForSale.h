#include "Uncopyable.h"
class HomeForSale:public Uncopyable
{
private:
    /* data */
public:
    HomeForSale(/* args */);
    ~HomeForSale();
};

HomeForSale::HomeForSale(/* args */)
{
}

HomeForSale::~HomeForSale()
{
}
