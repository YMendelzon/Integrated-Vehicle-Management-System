#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
        double payloadCapacity;

    public:
        Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double payloadCapacity);

        void displayInfo() const override;
    };

}

#endif // TRUCK_H
