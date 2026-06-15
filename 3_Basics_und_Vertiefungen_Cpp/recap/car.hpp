#ifndef CAR_HPP
#define CAR_HPP

#include "vehicle.hpp"

class Car : public Vehicle
{

public:
    Car(std::string brand, int power, int numberOfDoors)
        : Vehicle(brand, power), m_numberOfDoors(numberOfDoors) {};

    ~Car() {};

    void displayInfo() override;
    void accelerate() override;

private:
    int m_numberOfDoors;
};

#endif //! CAR_HPP