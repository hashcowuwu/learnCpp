#ifndef ARRAY_CPP
#define ARRAY_CPP

// 模板类的实现

template <typename T>
Array<T>::Array(T val) : value(val) {}

template <typename T>
T Array<T>::getVal() const {
    return value;
}

template <typename T>
void Array<T>::setVal(T val) {
    value = val;
}

#endif // ARRAY_CPP