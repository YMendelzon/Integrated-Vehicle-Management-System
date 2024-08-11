#include "Motorcycle.h"
#include <iostream>

namespace VDMS {

    Motorcycle::Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool hasSidecar)
        : Vehicle(vin, make, model, year), hasSidecar(hasSidecar) {}

    void Motorcycle::displayInfo() const {
        std::cout << "Motorcycle - VIN: " << VIN << ", Make: " << make << ", Model: " << model
            << ", Year: " << year << ", Sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
    }

}
