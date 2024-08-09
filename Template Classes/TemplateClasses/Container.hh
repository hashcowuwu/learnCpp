#ifndef CONTAINER_H
#define CONTAINER_H



template <typename T>
class Container{
public:
    Container(T val);
    T getVal();
private:
    T value;
};



#endif // CONTAINER_H
