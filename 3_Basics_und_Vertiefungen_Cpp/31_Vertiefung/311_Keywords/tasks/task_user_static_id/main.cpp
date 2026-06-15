#include "./user.cpp"

int main()
{
    std::vector<User> myUser;
    myUser.push_back(User("Erik C."));
    myUser.push_back(User("Paul M."));
    myUser.push_back(User("Dennis G."));
    myUser.push_back(User("Lukas F."));
    myUser.push_back(User("Lars P."));

    for (auto &user : myUser)
    {
        user.printInfo();
    }
}