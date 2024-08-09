#ifndef INTARRAY_H
#define INTARRAY_H

#include <cstddef>

class IntArray {
private:
    int* _array;
    std::size_t _size;
public:
    IntArray(std::size_t size);
    ~IntArray();
    int& at(std::size_t size);
    int size();

};


#endif // INTARRAY_H
