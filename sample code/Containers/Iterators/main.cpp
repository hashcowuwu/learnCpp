#include <iostream>
#include <map>

using namespace std;

//Think of your container as a file cabinet!
//将您的容器视为文件柜！

int main()
{
    //All containers are collections of objects...

    std::map<int,int >map{{1,6},{2,8},{0,3},{3,9}};

    for (auto iter = map.begin() ; iter != map.end(); iter ++ ) {
        const auto& [key,value] = *iter;
        std::cout << "key: "<<key << '\n';
        std::cout << "value: " <<value << '\n';
    }

    //Iterators are a particular type of pointer!
    //迭代器是一种特殊类型的指针！
    //迭代器必须指向容器中的元素，但是指针可以指向任何对象！

}
