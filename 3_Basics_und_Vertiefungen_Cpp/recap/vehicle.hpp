#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <iostream>

class Vehicle
{

public:
    Vehicle(std::string brand, int power)
        : m_brand(brand), m_power(power)
    {
    }

    virtual ~Vehicle() {};

    virtual void displayInfo();
    virtual void accelerate();

protected:
    std::string m_brand;
    int m_power; // in horsepower
};

#endif //! VEHICLE_HPP