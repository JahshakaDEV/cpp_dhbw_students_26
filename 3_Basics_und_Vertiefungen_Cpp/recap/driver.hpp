#ifndef DRIVER_HPP
#define DRIVER_HPP

#include "vehicle.hpp"

class Driver
{

public:
    Driver() {};

    ~Driver() {};

    void testDrive_copy(Vehicle testVehicle);
    void testDrive_reference(Vehicle &testVehicle);
    void testDrive_pointer(Vehicle *testVehicle);
};

#endif //! DRIVER_HPP_INCLUDED