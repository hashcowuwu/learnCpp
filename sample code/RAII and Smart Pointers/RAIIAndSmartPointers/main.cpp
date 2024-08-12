#include <iostream>
#include <memory>
using namespace std;

//异常是在代码中出现错误时处理错误的一种方式
//异常被“抛出”
//然而，我们可以编写代码来处理异常，以便在不必引发错误的情况下继续执行我们的代码。
//我们称之为“捕获”异常。


// new delete
// open close
// try_lock unlock
// socket close


//RAII：资源获取即初始化
//一个类使用的所有资源应在构造函数中获取！
//类所使用的所有资源应在析构函数中释放。
//通过遵守 RAII 原则，我们避免了“半有效”状态。
//还有一点：资源/对象在创建后即可立即使用。





//RAII  用于锁 → 锁守卫
//这些“包装”指针被称为“智能指针”！

//RAII 合规指针有三种类型：
//std::unique_ptr
//○ 独占其资源，无法复制
//std::shared_ptr
//○ 可进行复制，当底层内存超出作用域时即被销毁
//std::weak_ptr
//○ 一类旨在缓解循环依赖的指针


//始终使用 std::make_unique 和 std::make_shared 为什么？
//一次用于指针本身 1. 最重要的原因：如果我们不这样做，就会分配内存两次，一次用于指针本身，一次用于新的 T
//我们也应保持一致——如果你使用了 make_unique，也应一并使用make_shared!


//std::weak_ptr
//弱指针是一种避免代码中循环依赖的方法，从而防止内存泄漏。


class B;

class A {
public:
    std::weak_ptr<B> ptr_to_b;
    ~A() { std::cout << "All of A's resources deallocated" << std::endl; }
};

class B {
public:
    std::shared_ptr<A> ptr_to_a;
    ~B() { std::cout << "All of B's resources deallocated" << std::endl; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->ptr_to_b = b;
    b->ptr_to_a = a;
    std::cout << b->ptr_to_a.use_count() << std::endl;
    std::cout << a->ptr_to_b.use_count();
    return 0;
}
