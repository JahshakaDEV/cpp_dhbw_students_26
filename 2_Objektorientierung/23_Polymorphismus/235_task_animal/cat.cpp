#include "cat.hpp"
#include <iostream>

Cat::Cat(int age, std::string name) : Animal(age, name)
{
}

Cat::~Cat()
{
    std::cout << "...bye bye cat..." << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Meow!" << std::endl;
}