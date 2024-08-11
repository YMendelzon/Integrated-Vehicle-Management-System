#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

namespace VDMS {

    enum class ServiceType { OilChange, Inspection, TireRotation };

    class Vehicle {
    protected:
        std::string VIN;
        std::string make;
        std::string model;
        int year;
        static int vehicleCount;

    public:
        Vehicle(const std::string& vin, const std::string& make, const std::string& model, int year);
        virtual ~Vehicle();

        virtual void displayInfo() const = 0;

        static int getVehicleCount();
    };

}

#endif // VEHICLE_H
