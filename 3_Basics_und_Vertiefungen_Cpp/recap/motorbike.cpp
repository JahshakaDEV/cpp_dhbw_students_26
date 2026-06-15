#include "motorbike.hpp"

void Motorbike::displayInfo()
{
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << " HP, Engine Type: " << m_engineType << std::endl;
}

void Motorbike::accelerate()
{
    std::cout << "accelerating with power " << m_power << " and starting Wheelie" << std::endl;
}