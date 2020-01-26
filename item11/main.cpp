#include "Widget.h"

int main()
{
    Widget wid;
    if(wid.getpb() == nullptr) {
        std::cout<<"nullptr"<<std::endl;
    } else {
        std::cout<<*wid.getpb()<<std::endl;
        std::cout<<"not nullptr"<<std::endl;
    }
    wid = wid;
    if(wid.getpb() == nullptr) {
        std::cout<<"nullptr"<<std::endl;
    } else {
        std::cout<<*wid.getpb()<<std::endl;
        std::cout<<"not nullptr"<<std::endl;
    }
}

