#ifndef SUBSTR_H
#define SUBSTR_H



//std::same_as 是一个编译时谓词，用于判断两个类型是否完全相同
#include <cstddef>
template <typename Type >
concept equalizability = requires (Type a,Type b) {
    a == b;
    a != b;
};
template <equalizability T>
class Substr {
public:
    Substr(T val);
    T getVal(size_t size);
    T& at(size_t index);
    int size() const;
    unsigned getRate() const;
private:
    T* value;
    size_t _size;
    unsigned rate;
};


#endif // SUBSTR_H
