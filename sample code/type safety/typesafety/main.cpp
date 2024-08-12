
#include <vector>
#include <optional>
using namespace std;

//类型安全
//std::optional

// recap
//- 我们有移动语义，因为有时原始所有者不再需要我们要获取的资源 // move
//使用 std::move(x) 将 x（左值）转换为右值，以便您可以立即夺取其资源


//类型安全：语言防止输入错误的程度。
//- std::Optional 是一个模板类，它将包含类型 T 的值或不包含任何内容（表示为 nullopt）
//Nullptr：可以转换为任何指针类型值的对象
//Nullopt：可以转换为任何可选类型值的对象
/*
void removeOddsFromEnd(std::vector<int>& vec) {
    while(vec.back() % 2 == 1) {
        vec.pop_back();
        //如果 vec 是 {} / 空向量怎么办！？
        //未定义的行为：函数可能会崩溃，可能会给我们带来垃圾，可能会意外地给我们一些实际值
    }
}
(
*/

//签名保证了函数的行为。

//- 函数签名创建更具信息量的契约 - 类函数调用具有保证且可用的行为



//std::可选类型有一个 - .value() 方法：返回包含的值或抛出 bad_Optional_access 错误
//.value_or(valueType val) 返回包含的值或默认值，参数val
//- .and_then(函数 f) 在包含的值存在时，返回调用 f(value) 的结果， 否则返回 null_opt（f 必须返回可选值）
//- .transform(函数 f) 在包含的值存在时，返回调用 f(value) 的结果， 否则返回 null_opt（f 必须返回 optional）
//- .or_else(函数 f) 如果存在值则返回该值，否则返回调用 f 的结果



/*
 * Credit to Sarah McCarthy '23 for this example
 */

#include <iostream>
#include <optional>

std::optional<int> divide(int numerator, int denominator) {
    if (denominator != 0) {
        return numerator / denominator;
    } else {
        return std::nullopt;
    }
}

int main() {
    int a = 10;
    int b = 2;

    std::optional<int> result = divide(a, b);

    if (result) {
        std::cout << "Result: " << result.value() << std::endl;
    } else {
        std::cout << "Division by zero occurred." << std::endl;
    }

    result = divide(10, 0);

    if (result) {
        std::cout << "Result: " << result.value() << std::endl;
    } else {
        std::cout << "Division by zero occurred." << std::endl;
    }

    return 0;
}
