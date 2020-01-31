#ifndef MYSET_H_
#define MYSET_H_
#include <list>
#include <algorithm>
template<class T>
class MySet {
 public:
  bool member(const T& item) const {
    return std::find(rep.begin(), rep.end(), item) != rep.end();
  }
  void insert(const T& item) {
    if(!member(item)) {
      rep.push_back(item);
    }
  }
  void remove(const T& item) {
    auto it = std::find(rep.begin(), rep.end(), item);
    if(it != rep.end()) {
      rep.erase(it);
    }
  }
  std::size_t size() const {
    return rep.size();
  }
 private:
  std::list<T> rep;
};
#endif