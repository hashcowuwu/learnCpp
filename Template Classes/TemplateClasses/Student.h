#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student{
private:
    using String = std::string;
    String name;
    String state;
    int age;
public:
    Student(String name, String state,int age);
    void setName(String name);
    String getName() const;
    String getState();
    int getAge() const;
};


std::string stringify(const Student& s){ //编译器不知道getName是否回修改所以必须要在函数定义后面加上const
                                         //Objects that are const can only interact with the const-interface.
    return s.getName() + "is"  + std::to_string(s.getAge()) + " years old";
}
#endif // STUDENT_H
