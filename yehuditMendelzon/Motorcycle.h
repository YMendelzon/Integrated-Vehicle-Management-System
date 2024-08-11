#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {

    class Motorcycle : public Vehicle {
        bool hasSidecar;

    public:
        Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool hasSidecar);

        void displayInfo() const override;
    };

}

#endif // MOTORCYCLE_H
