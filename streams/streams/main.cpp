#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

/*
 * C++
 * Streams
 * a general input/output facility for C+
 * C++ 的通用输入/输出工具
*/

int inputFileStreamExample() {
    std::ifstream ifs("append.txt");
    if(ifs.is_open()){
        std::string line;
        std::getline(ifs, line);
        std::cout << "Read from the file: " << line  << '\n';
    }

    if(ifs.is_open()) {
        std::string lineTwo;
        std::getline(ifs,lineTwo);
        std::cout << "Read from the file: " << lineTwo << '\n';
    }
    return 0;
}



int main()
{
    /*
     * Input streams (I)
     * ● a way to read data from a source
     * ○ Are inherited from std::istream
     * ○ ex. reading in something from the console (std::cin)
     * ○ primary operator: >> (called the extraction operator)
     * Output streams (O)
     * ● a way to write data to a destination
     * ○ Are inherited from std::ostream
     * ○ ex. writing out something to the console (std::cout)
     * ○ primary operator: << (called the insertion operator)
    */
    std::string initial_quote = "Bjarne Stroustrup C makes it easy to shoot yourself in the foot";

    /*
     * create a stringstream
     * 创建一个字符串流
     */


    std::stringstream ss(initial_quote);

    /*
     * data destinations
     * 数据目的地
     */
    std::string first;
    std::string last;
    std::string language, extracted_quote;
    //记住！流将数据从一个地方移动到另一个地方
    ss >> first >> last >> language >> extracted_quote;
    std::getline(ss, extracted_quote);
    std::cout << first << " "<< last << "  said this:  " << language <<  " "  <<
        extracted_quote << std::endl;

    //getline() 读取输入流 is 直到分隔符，并将其存储在某个缓冲区 str 中。分隔符默认为‘\n’。

    double tao = 6.28;
    std::cout << tao;
    std::cout << std::flush;

    /*
     * flushing is an expensive operation!
     * 冲洗是一项昂贵的操作
     */


    //C++ 很聪明！它知道何时 自动刷新

    // good fake

    for (int i = 1  ; i <= 5 ; ++ i) {
        std::cout << i <<  '\n';
    }

    //bad

    for (int i = 1 ; i <= 5 ; ++ i ) {
        std::cout << i << std::endl;
    }
    // good real
    std::ios::sync_with_stdio(false);
    for (int i = 1  ; i <= 5 ; ++ i) {
        std::cout << i <<  '\n';
    }

    /*
     * err and clog
     * cerr: used to output errors (unbuffered)
     * clog: used for non-critical event logging
     * (buffered)
     * err 和 clog
     * cerr：用于输出错误（无缓冲）
     * clog：用于非关键事件记录（缓冲）
    */

    //Output File Streams 输出文件流

    std::ofstream ofs("hello.txt");

    if (ofs.is_open()) {
        //Creates an output file stream to the file “hello.txt
        ofs << "Hello CS106L!" << '\n';
    }

    ofs.close();
    ofs << "this will not get written";
    //Will silently fail 默默失败

    ofs.open("hello.txt",std::ios::app);
    ofs << "this will though! It's open again";

    inputFileStreamExample();


    //input streams
    /*输入流的类型为 std::istream
     * ● 一种从目标/外部源读取数据的方法
     * ○ 使用 >> 提取器运算符从输入流读取
     * ○ 请记住 std::cin 是控制台输
     */
    /*
     *你实际上不应该同时使用 getline() 和 std::cin()
     *因为它们解析数据的方式不同。
     *如果你真的需要，这是可能的，但不推荐
     */


    return 0;
}
