#include<iostream>
#include<vector>
class WidgetImpl {
    public:
    private:
        int a,b,c;
        std::vector<double> v;
};

class Widget {
    public:
        Widget(const Widget& rhs);
        Widget& operator=(const Widget& rhs) {
            *pimpl_ = *(rhs.pimpl_);
        }
    private:
        WidgetImpl *pimpl_;
};