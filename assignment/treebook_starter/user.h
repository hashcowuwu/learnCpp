#include <set>
#include <string>

class User {
public:
    // TODO: write special member functions, including default constructor!
    User* operator=(User&& other);
    void operator+(User&& other);
    User& operator=(const User&) = delete;
    User(); // default constructor

    User(std::string name);


    // getter functions
    std::string getName() const;
    std::set<User>& getFriends();
    const std::set<User>& getFriends() const;

    // setter functions
    void setName(std::string name);
    void setFriend(std::set<User> friends);


    // TODO: add the < operator overload here!

    bool operator<(const User& other)const;

private:
    std::string name;
    std::set<User> friends;

};
