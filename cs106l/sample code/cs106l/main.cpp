#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <tuple>


using namespace std;

std::tuple<std::string,std::string,std::string>getClassInfo() {
        std::string className = "CS106L";
        std::string buildingName = "Turing Auditorum";
        std::string language = "C++";
        return {className,buildingName,language};
}

//Initialization & References

void Structured_Binding_a() {
    auto [className,buildingName,language] = getClassInfo();
    std::cout << "Come to" << buildingName << " and join us for " << className << " to learn " << language << " ! " << std::endl;
}

void Structured_Binding_b(){
    auto classInfo = getClassInfo();
    std::string className = std::get<0>(classInfo);
    std::string buildingName = std::get<1>(classInfo);
    std::string language = std::get<2>(classInfo);
    std::cout << "Come to" << buildingName << " and join us for " << className << " to learn " << language << " ! " << std::endl;
}

void Initialization_References(){

    std::map<std::string,std::vector<std::pair<int,std::unordered_map<char,double>>>>complexType;

    std::map<std::string,std::vector<std::pair<int,std::unordered_map<char,double>>>>::iterator it_a = complexType.begin();

    //vs

    auto it_b = complexType.begin();

    //Direct initialization

    int numOne = 12.0;
    int numTwo(12.0);

    std::cout << "numOne:" << numOne << std::endl;

    std::cout << "numTwo:" << numTwo << std::endl;

    /*
     * *******************************************************************************************************************
     */


    //Uniform initialization (C++11)
    //  int numa{1.0} ; NO
    int numa{1}; // yes
    int numb{2};

    std::cout << "numa:" << numa << '\n';

    std::cout << "numb:" << numb << "\n";

    /*
     * Uniform initialization is awesome because:
    1. It’s safe! It doesn’t allow for narrowing conversions—which can lead to
    unexpected behaviour (or critical system failures :o)
    */

    std::map<std::string,int> ages{
        {"Alice",25},
        {"Bob",30},
        {"Charlie",35}
    };

    std::cout << "Alice's age:" << ages["Alice"] << std::endl;
    std::cout << "Bob's age:" << ages.at("Bob") << std::endl;

    std::vector<int>numbers{1,2,3,4,5};

    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    struct Student {
        std::string name;
        std:: string state;
        int age;
    };

    Student s{"Haven","AR",21};

    /*
     * *******************************************************************************************************************
     */


    //Structured Binding (C++ 17)

    //在编译时从具有固定大小的数据结构中初始化一些变量的有用方法

    Structured_Binding_b();

    const int constnum = 1;
    const int& kkkk {constnum};
    // int& kkkk {constnum}; BAD

}



int main()
{
    Initialization_References();
}
