#include<iostream>
#include<vector>
#include <iterator>
#include <string>
template <typename T>
void workwithiterator(T iter) {
  typename std::iterator_traits<T>::value_type temp = *iter;
  std::cout<< "temp is "<<temp<<std::endl;
}

int main()
{
  // std::vector<int> a{1,2,3};
  // std::iterator_traits<std::vector<int>::iterator>::value_type temp(*(a.begin() + 1));
  // std::cout << temp <<std::endl;
  std::vector<int> a{1};
  workwithiterator(a.begin());
  std::vector<std::string> b{"a"};
  workwithiterator(b.begin());
}