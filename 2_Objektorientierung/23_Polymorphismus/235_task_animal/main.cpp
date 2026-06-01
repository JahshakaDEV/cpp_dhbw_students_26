
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

#include <vector>

void printAnimalSounds(std::vector<Animal *> animals)
{
    for (Animal *animal : animals)
    {
        animal->introduceYourself();
    }
}

int main()
{
    Dog dog(3, "Buddy");
    Cat cat(2, "Whiskers");

    std::vector<Animal *> animals = {&dog, &cat};
    printAnimalSounds(animals);
    return 0;
}
