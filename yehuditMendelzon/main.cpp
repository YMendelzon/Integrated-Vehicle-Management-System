#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"
#include <iostream>
int main() {
    using namespace VDMS;

    Car car1("1HGBH41JXMN109186", "Toyota", "Camry", 2020, 4);
    Truck truck1("1FDXF46S12EA23456", "Ford", "F-150", 2018, 1.5);
    Motorcycle bike1("2HGES16575H540013", "Harley-Davidson", "Street 750", 2021, true);

    ServiceStation station;
    station.addService(ServiceType::OilChange, &car1);
    station.addService(ServiceType::Inspection, &truck1);
    station.addService(ServiceType::TireRotation, &bike1);

    station.processServices();

    std::cout << "Total Vehicles: " << Vehicle::getVehicleCount() << std::endl;

    return 0;
}
