#include <set>
#include <string>

class User {
public:
    // TODO: write special member functions, including default constructor!
    User* operator=(User& other);
    friend void operator+(User& lhs,User& rhs); // The friend keyword allows non-member functions or classes to access private information in another class!
    User& operator=(const User&) = delete;
    User(); // default constructor

    User(std::string name);


    // getter functions
    std::string getName() const;
    std::set<User>& getFriends();
    const std::set<User>& getFriends() const;

    // setter functions
    void setName(std::string name);



    // TODO: add the < operator overload here!

    bool operator<(const User& other)const;

private:
    std::string name;
    std::set<User> friends;

};
