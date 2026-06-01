#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
public:
    Cat(int age, std::string name);
    ~Cat() override;

private:
    void makeSound() override;
};

#endif