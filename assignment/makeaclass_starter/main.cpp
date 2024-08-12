#include "class.h"
#include <iostream>
/*
 * Assigment 3: Make a class!
 * Requirements:
 * Must have a custom constructor ❌
 * Must have a default constructor ❌
    - i.e. constructor overloading
 * Must have private members (functions and/or variables) ❌
 * Must have public members (functions) ❌
 * Must have at least one getter function ❌
 * Must have at least one setter function ❌
 */ 

//1. 类要求：1. 必须拥有自定义构造函数 2. 必须拥有默认构造函数（即构造函数重载） 3. 必须包含私有成员（函数和/或变量） 4. 必须包含公有成员（函数） 5. 必须至少有一个获取函数

int main() {
  // initialize class and run this file
  HArray abc{3,"acv"};
  std::cout << abc.size() << '\n';
  return 0;
}
