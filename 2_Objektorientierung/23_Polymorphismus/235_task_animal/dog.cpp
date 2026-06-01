#include "dog.hpp"
#include <iostream>

Dog::Dog(int age, std::string name) : Animal(age, name)
{
}

Dog::~Dog()
{
    std::cout << "...bye bye dog..." << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Woof!" << std::endl;
}