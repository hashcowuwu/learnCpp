#include "Student.h"
#include "IntArray.h"
#include <string>
#include <cstddef>


std::string Student::getName() const {
    return this->name;
}

std::string Student::getState() {
    return this->state;
}


int Student::getAge() const {
    return this->age;
}



IntArray::IntArray(std::size_t size) : _size(size),_array(new int[size]);


IntArray::~IntArray() {
    delete [] _array;
}

int& at(size_t index) {
    return _array[index];
}
int& at(size_t index) const{
    return _array[index];
}

int& findItem(int value){
    for (auto& elem: arr){
        if(elem == value) return elem;
    }
    throw std::out_of_range("value not found");
}


int size() {
    return this->_size;
}


//static void printElemnt(const IntArray& arr,size_t index){
//    std::cout << arr.at(index)
//}






int main(){

}
