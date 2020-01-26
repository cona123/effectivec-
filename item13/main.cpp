#include<memory>
#include<iostream>
int main()
{
    std::shared_ptr<int> a(new int(10));
    std::shared_ptr<int> b(new int[10]);
}