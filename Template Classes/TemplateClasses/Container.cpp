#include "Container.hh"

template <class T>
Container<T>::Container(T val) {
    this->value = val;
}

template <typename T>
T Container<T>::getVal(){
    return value;
}


