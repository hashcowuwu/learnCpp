// Blank header file


#ifndef CLASS_H
#define CLASS_H

#include <cstddef>
#include <string>
class HArray {
public:
  using iterator = std::string *;
  const size_t  kInitialSize = 2;

  HArray();
  HArray(size_t n,const std::string &val);
  ~HArray();


  size_t size();
  bool empty();

  void push(const std::string &elem);
  std::string &operator[](size_t index);
  std::string &at(size_t index);

  iterator begin();
  iterator end();

private:
  size_t logicalSize;
  size_t allocatedSize;
  std::string *elems;
  void grow();

};

#endif // !CLASS_H
