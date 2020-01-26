#include "HomeForSale.h"
int main()
{
    HomeForSale a;
    HomeForSale b(a);//wrong:use of deleted function ‘HomeForSale::HomeForSale(const HomeForSale&)’

    HomeForSale c = a;//wrong: use of deleted function ‘HomeForSale::HomeForSale(const HomeForSale&)’

}