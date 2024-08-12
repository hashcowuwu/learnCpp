#include <iostream>
#include <vector>

using namespace std;
//L-value & R-value lifetime
//L 值一直有效到范围结束
//R 值一直存在到行尾


class HumanGenome {
private:
    std::vector<char> data;
public:
    HumanGenome() = default;
    HumanGenome(size_t size): data(size) {
        std::fill(data.begin(),data.end(),'A');
    }
};


//A new type of constructor
/*
When would this be used?
    HumanGenome stage1(HumanGenome genome) {
    genome.process(); // assume some process function exists in HumanGenome
    return genome;
}
HumanGenome stage2(HumanGenome genome) {
    genome.process();
    return genome;
}
HumanGenome stage3(HumanGenome genome) {
    genome.process();
    return genome;
}
*/
class NewHumanGenome {
private:
    std::vector<char> data;
public:
    //move constructor
    //每当不再需要原始对象时，您可以使用 std::move() 进行传输而不是复制
    //通常，我们希望避免在应用程序代码中使用 std::move()。
    //在类定义中使用它，例如构造函数和运算符。
    //○ 如果您定义了移动构造函数和移动赋值运算符，则编译器可以执行大部分优化，而无需执行 std::move()。
    NewHumanGenome(NewHumanGenome&& other) noexcept:
        //在C++20中，noexcept 关键字用于指定一个函数是否可能抛出异常。noexcept 有两种形式：
        data(std::move(other.data)) {
        std::cout << "HumanGenome moved into stage." << std::endl;
    }

};


// SMF哲学

/*
 * 如果您不需要构造函数、析构函数或复制赋值等，那么就不要使用它！
 * 如果您需要自定义析构函数，那么您可能还需要为您的类定义复制构造函数和复制赋值运算符
 * ：如果您使用析构函数，这通常意味着您正在手动处理动态内存分配/通常只是处理您自己的内存。
 * ：由于手动内存管理，编译器将无法自动为您生成这些。
 * 如果定义了复制构造函数或复制赋值运算符，则还应该定义移动构造函数和移动赋值运算符。
 * 与三法则不同，这与正确性无关，更多地与效率有关。//就是单纯的性能问题
*/

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
