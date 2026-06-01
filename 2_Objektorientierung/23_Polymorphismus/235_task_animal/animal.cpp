#include "animal.hpp"
#include <iostream>

Animal::Animal(int age, std::string name) : m_age(age), m_name(name)
{
}

Animal::~Animal()
{
    std::cout << "...bye bye animal..." << std::endl;
}

void Animal::introduceYourself()
{
    makeSound();
    std::cout << "I am " << m_name << " and I am  " << m_age << " years." << std::endl;
}