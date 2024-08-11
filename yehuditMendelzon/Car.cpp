#include "Car.h"
#include <iostream>

namespace VDMS {

    Car::Car(const std::string& vin, const std::string& make, const std::string& model, int year, int doors)
        : Vehicle(vin, make, model, year), doors(doors) {}

    void Car::displayInfo() const {
        std::cout << "Car - VIN: " << VIN << ", Make: " << make << ", Model: " << model
            << ", Year: " << year << ", Doors: " << doors << std::endl;
    }

}
