#include<iostream>
#include "2.h"
#define PI 3.14
//const double pi123 = 3.14;
const int GamePlayer::NumTurns;//if not this line ,will error undefined reference to `GamePlayer::NumTurns'
template<typename T> 
inline void callwithmax(const T& a,const T& b)
{
    std::cout<<"a is "<< a<<std::endl;
    std::cout<<"b is "<<b<<std::endl;
}
void GamePlayer::printp()
{
    std::cout<<&NumTurns<<std::endl;
}
int main()
{
    std::cout<<PI<<std::endl;
    int a = 5;
    int b = 0;
    callwithmax(++a,b);
    a=5;
    b= 0;
    callwithmax(++a,b+10);
    GamePlayer gameplayer;
}