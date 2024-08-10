/*
Assignment 2: Marriage Pact

This assignment asks you to discover your one true love using containers and
pointers. There are two parts: implement get_applicants and find_matches.

Submit to Paperless by 11:59pm on 2/1/2024.
*/

#include <fstream>
#include <iostream>
#include <iterator>
#include <queue>
#include <string>
// #include <set>
#include <unordered_set>


std::unordered_set<std::string> get_applicants(std::string filename) {
    // TODO: Implement this function. Feel free to change std::set to
    // std::unordered_set if you wish!
    std::pmr::unordered_set<std::string>names;
    std::ifstream ofs(filename, std::ios::binary);
    if(!ofs.is_open()) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        exit(1);

    }
    std::string data(std::istreambuf_iterator<char>(ofs),{});
    while(std::getline())
}

std::queue<const std::string *> find_matches(std::set<std::string> &students) {
    // TODO: Implement this function.
}

int main() {
    // Your code goes here. Don't forget to print your true love!

    return 0;
}
