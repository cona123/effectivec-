#include<iostream>
class Bitmap {
public:
    Bitmap(){
        std::cout<<"Bitmap constructed"<<std::endl;
    }
};

class Widget
{
private:
    /* data */
public:
    Widget(/* args */);
    ~Widget();
    Widget& operator=(const Widget&);
    char* getpb();
private:
    char* pb;
};

Widget::Widget(/* args */)
{
    pb = new char('a');
}

Widget::~Widget()
{
}

//wrong ,when rhs == this,then this pb will destructed
// Widget& Widget::operator=(const Widget& rhs)
// {
//     std::cout<< "Widget::operator="<<std::endl;
//     //if(this == &rhs) return *this;
//     delete pb;
//     pb = new char(*rhs.pb);
//     return *this;
// }

//right ,but if new char error ,this will lose memory
// Widget& Widget::operator=(const Widget& rhs)
// {
//     std::cout<< "Widget::operator="<<std::endl;
//     if(this == &rhs) return *this;
//     delete pb;
//     pb = new char(*rhs.pb);
//     return *this;
// }

//right 1
Widget& Widget::operator=(const Widget& rhs)
{
    std::cout<< "Widget::operator="<<std::endl;
    char* pOrig = pb;
    pb = new char(*rhs.pb);
    delete pOrig;
    return *this;
}

//use swap 
// Widget& Widget::operator=(const Widget& rhs)
// {
//     std::cout<< "Widget::operator="<<std::endl;
//     Widget temp(rhs);
//     swap(temp);
//     return *this;
// }

char* Widget::getpb()
{
    return pb;
}
