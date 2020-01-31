template<typename T>
class Derived:public Base<T>::nested {  // no typename Base<T>::nested is a class,like vector<int>::iterator
 public:
  explicit Derived(int x):Base<T>::nested(x) {  // no typename
    typename Base<T>::nested temp;  // use typename
  }
};