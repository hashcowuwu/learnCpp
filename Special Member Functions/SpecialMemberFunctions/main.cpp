#include <iostream>

using namespace std;

//Special Member Functions
//特殊成员函数

//这些函数只有在调用它们时才会生成(在任何函数由您显式定义之前)

/*
 * 默认构造函数 (Default Constructor):
 * 析构函数 (Destructor):
 * 复制构造函数 (Copy Constructor):
 * 复制赋值操作符 (Copy Assignment Operator):
 * 移动构造函数 (Move Constructor):
 * 移动赋值操作符 (Move Assignment Operator):
 */

//为什么要重写特殊的成员函数？

//By default, the copy constructor will create copies of each member variable.
//如果变量是一个指针，则成员复制将指向相同的分配数据，而不是新复制！
//深度拷贝: 一个对象，是一个完整的，独立的原件的拷贝

class Widget {
public:
    Widget();
    Widget (const Widget& w);
    Widget& operator = (const Widget& w); // support moving
    ~Widget();
    Widget(Widget&& rhs);
    Widget& operator = (Widget&& rhs); // support copying
};

class PasswordManager {
public:
    PasswordManager() = default;
    PasswordManager(const PasswordManager& pm) = default;
    //这个声明表示复制构造函数将被编译器自动生成。复制构造函数用于创建一个新对象，该对象是现有对象的副本。
    ~PasswordManager(); //现在复制是不可能的操作！
    PasswordManager(const PasswordManager& rhs) = delete;
    //它有一个被删除的赋值操作符，禁止对象之间的赋值操作。
    //我们可以选择性地允许特殊成员的功能
    PasswordManager& operator = (const PasswordManager& rhs) = delete;
private:
    std::string myPassword;
};
//我们应该只在编译器生成的默认值不起作用时才定义新的。
//如果您必须定义析构函数、复制建构子或复制赋值操作符，那么您应该同时定义这三个操作符！


//仅在以下情况下才会生成移动构造函数和运算符：
/*
 * 没有声明复制操作
 * 没有声明移动操作
 * 没有声明析构函数
 * 声明其中任何一个都将摆脱默认的 C++生成的操作。
 */
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
