#include "Vehicle.h"

namespace VDMS {

    int Vehicle::vehicleCount = 0;

    Vehicle::Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year)
        : VIN(vin), make(make), model(model), year(year) {
        vehicleCount++;
    }

    Vehicle::~Vehicle() {
        vehicleCount--;
    }

    int Vehicle::getVehicleCount() {
        return vehicleCount;
    }

}
