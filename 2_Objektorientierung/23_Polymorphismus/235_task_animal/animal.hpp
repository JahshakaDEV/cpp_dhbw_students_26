
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:
    Animal(int age, std::string name);
    virtual ~Animal();
    void introduceYourself();

private:
    virtual void makeSound() = 0;
    int m_age;
    std::string m_name;
};

#endif