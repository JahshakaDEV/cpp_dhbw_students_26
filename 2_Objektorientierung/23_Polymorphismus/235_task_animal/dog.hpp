#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
public:
    Dog(int age, std::string name);
    ~Dog() override;

private:
    void makeSound() override;
};

#endif