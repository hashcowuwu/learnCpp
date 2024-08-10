/*
Assignment 2: Marriage Pact

This assignment asks you to discover your one true love using containers and
pointers. There are two parts: implement get_applicants and find_matches.

Submit to Paperless by 11:59pm on 2/1/2024.
*/

#include <fstream>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <unordered_set>
#include <list>

std::unordered_set<std::string> get_applicants(std::string filename) {
  // TODO: Implement this function. Feel free to change std::set to
  // std::unordered_set if you wish!
  std::ifstream ofs(filename, std::ios::binary);
  if(!ofs.is_open()) {
    std::cerr << "Failed to open file: " << filename << std::endl;
  }
  std::string tmpString;
  std::unordered_set<std::string>Set;
  int tmp = 0;
  while(std::getline(ofs,tmpString,'\n')) {
    std::istringstream tokenStream(tmpString);
    std::string subString;
    while(std::getline(tokenStream,subString,' '))
      if(Set.find(subString)== Set.end()) {
        Set.insert(subString);
        std::cout << subString << '\n';
        tmp ++ ;
      }
  }
  return Set;
}

std::queue<std::string,std::list<std::string>> find_matches(std::unordered_set<std::string> &students) {
  // TODO: Implement this function.
  std::queue<std::string, std::list<std::string>>myQueue;
  for (std::string element:students) {
    if(element[0] == 'H') {
      myQueue.push(element);
    }
  }
  return myQueue;

}

int main() {
  // Your code goes here. Don't forget to print your true love!
  auto names = get_applicants("students.txt");
  auto nameList = find_matches(names);
  while(!nameList.empty()) {
    std::cout << nameList.front() << '\n';
    nameList.pop();
  }

  return 0;
}
