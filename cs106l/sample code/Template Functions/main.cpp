#include <iostream>


template<typename Type>
Type myMin(Type a,Type b) {
  return a < b ? a : b;
}

int main() {
  int a = 1 , b = 2;
  std::cout << myMin(a, b) << '\n';
  return 0;
}
