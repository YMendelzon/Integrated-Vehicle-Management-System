#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {

    class Car : public Vehicle {
        int doors;

    public:
        Car(const std::string& vin, const std::string& make, const std::string& model, int year, int doors);

        void displayInfo() const override;
    };

}

#endif // CAR_H
