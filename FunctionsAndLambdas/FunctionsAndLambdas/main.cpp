#include <iostream>

using namespace std;

template <typename InputIt,typename UniPerd>
int count_occurrences(InputIt begin, InputIt end, UniPerd pred){
    int count  = 0;
    for (auto iter = begin; iter != end ; ++ iter) {
        if(pred(*iter)) count ++;
    }
    return count;
}
//UniPred 就是所谓的函数指针！

bool isVowel(char c) {
    std::string vowel = "aeiou";
    return vowel.find(c) != std::string::npos;
}

// Unary predicates are pretty limited and don’t generalize well.
//一元谓词非常有限，不能很好地泛化。
//If we could, it would be nice to use a binary predicate to handle this!
//如果可以的话，最好使用二进制谓词来处理这个问题！


 //所有东西(lambdas、函数、函数指针)都可以强制转换为标准函数！
class Animal {
public:
    virtual void speak(){
        std::cout << "I'm an animal!" << std::endl;
    }
};

class Dog : public Animal{
private:
    void speak() {
        std::cout  << "I'm a dog!" << std::endl;
    }
};
//虚函数是超类中的函数，我们希望稍后被重写。

//Aside: Virtual Functions


void func(Animal* animal){
    animal->speak();//can take in any animal and make it speak!
}


int main()
{
    std::string str = "Tchaikovsky";
    std:: cout << "Occurrences of the letter k in Tchaikovsky: " << count_occurrences(str.begin(),str.end(),isVowel) <<
        "\n";
    int limit = 5;
    //只使用 = 符号按值捕获所有内容，只使用 & 符号按引用捕获所有内容
    auto isMoreThan = [limit](int n){return n > limit; };
    isMoreThan(6);
    Animal* myAnimal = new  Animal;
    Dog* myDog = new Dog;
    func(myAnimal);
    func(myDog);

    return 0;
}
