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

Widget& Widget::operator=(const Widget& rhs)
{
    std::cout<< "Widget::operator="<<std::endl;
    //if(this == &rhs) return *this;
    delete pb;
    pb = new char(*rhs.pb);
    return *this;
}

char* Widget::getpb()
{
    return pb;
}
