#include <iostream>

int static startID = 1;

class User
{
private:
    int userID;
    std::string name;

public:
    User(const std::string &name) : name(name), userID(startID++)
    {
    }

    void printInfo() const
    {
        std::cout << "User: " << name << ", ID: " << userID << std::endl;
    }
};
