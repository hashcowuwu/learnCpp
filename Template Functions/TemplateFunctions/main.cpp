#include <iostream>
#include "Substr.hh"
using namespace std;

template <typename Type = int> // 不加参数默认int类型
Type myMin(Type a,Type b) {
    return a > b ? b : a;
}

//C++ 20允许

/*
 * template classes
 * template functions
 * non-template member functions of a template clas
 */

//A named set of constraints is a concept.

template <typename T>
concept Addable = requires (T a, T b) {
    a + b; //限制 a + b 可编译才能允许
};

template<typename T> requires Addable<T>
T add(T a,T b) {return  a + b ;}

//This shorthand also works!
/*
template<Addable T>
T add(T a, T b){return a + b;}
*/

//隐式推导
template <typename T,typename U>
auto smarterMyMin(T a, U b) {
    return a < b ? a : b;
}


//Remember: like in template classes, template functions
//are not compiled until used!

//记住: 就像在模板类中一样，模板函数在使用之前是不会被编译的！


//模板在编译期执行

template<unsigned n>
struct Factorial {
    enum {value = n * Factorial<n - 1>::value};
};

template<>
struct Factorial<0>{
    enum { value = 1};
};

// There are other ways in C++ to make code run during compile time.
// constexpr
//常量表达式必须立即初始化，并在编译时运行
//传递给常量表达式的参数也应该是常量/常量表达式。
//Conexpr 是模板超编程的制度化，而且通常更易于阅读！
constexpr double fib(int n){
    if(n == 1) return 1;
    return fib(n - 1) * n;
}

template <class T>
Substr<T>::Substr(T val) {
}


int main()
{
    std::cout << "add: "<< add<int>(122,1) << std::endl;
    std:: cout << "smarterMyMin: "<< smarterMyMin(122.55,1.55) << std::endl;



    std:: cout <<"Factorial: " << Factorial<10>::value << std::endl;
    const long long bigval =fib(20);

    std::cout << "bigval: " << bigval << std::endl;
    //减小编译后代码，某些内容在编译期间运行一次，并且可以在运行时期间使用任意次数
    //Applications of TMP：
    //优化矩阵/树/其他数学结构操作


    return 0;
}
