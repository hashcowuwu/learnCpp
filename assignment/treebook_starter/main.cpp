#include <iostream>
#include <set>
#include "user.h"

// TODO: Implement the non-member function + operator overload here!

void User::operator+(User&& other) {

    std::set<User>tmp;
    for (auto&& i : this->getFriends()) {
        if(!tmp.count(i)) {
            tmp.insert(i);
        }
    }
    for (auto&& i : other.getFriends()) {
        if(!tmp.count(i)) {
            tmp.insert(i);
        }
    }
    this->setFriend(tmp);
    other.setFriend(tmp);

}


void printFriends(const User& user) {
    std::cout << user.getName() << " is friends with: " << std::endl;
    for(auto& user : user.getFriends()) {
        std::cout << "  " << user.getName() << std::endl;
    }
}

int main() {
    // create a bunch of users
    User alice("Alice");
    User bob("Bob");
    User charlie("Charlie");
    User dave("Dave");

    // make them friends
    alice + bob;
    alice + charlie;

    dave + bob;
    charlie + dave;


    // print out their friends
    printFriends(alice);
    printFriends(bob);
    printFriends(charlie);
    printFriends(dave);



    return 0;

}
