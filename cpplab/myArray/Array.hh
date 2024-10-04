#ifndef ARRAY_HH
#define ARRAY_HH

template <typename T>
class Array{
public:
    Array(T val);
    T getVal() const;
    void setVal(T val);
private:
    T value;
};

#include "Array.cpp"

#endif // ARRAY_H
