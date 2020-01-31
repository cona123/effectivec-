#include <iostream>
#include <vector>
template<typename C>
void print2nd(const C& container) {
  if(container.size() > 2) {
    typename C::const_iterator i = container.begin();
    i++;
    int value = *i;
    std::cout<< value <<std::endl;
  }
}

int main()
{
  std::vector<int> a{1,2,3};
  print2nd(a);
}