#include "Truck.h"
#include <iostream>

namespace VDMS {

    Truck::Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double payloadCapacity)
        : Vehicle(vin, make, model, year), payloadCapacity(payloadCapacity) {}

    void Truck::displayInfo() const {
        std::cout << "Truck - VIN: " << VIN << ", Make: " << make << ", Model: " << model
            << ", Year: " << year << ", Payload Capacity: " << payloadCapacity << " tons" << std::endl;
    }

}
