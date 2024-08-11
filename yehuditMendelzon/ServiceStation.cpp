#include "ServiceStation.h"
#include <iostream>

namespace VDMS {

    void ServiceStation::addService(ServiceType type, Vehicle* vehicle) {
        serviceQueue.push({ type, vehicle });
    }

    void ServiceStation::processServices() {
        while (!serviceQueue.empty()) {
            auto service = serviceQueue.front();
            serviceQueue.pop();

            std::cout << "Processing Service: ";
            switch (service.first) {
            case ServiceType::OilChange:
                std::cout << "Oil Change for ";
                break;
            case ServiceType::Inspection:
                std::cout << "Inspection for ";
                break;
            case ServiceType::TireRotation:
                std::cout << "Tire Rotation for ";
                break;
            }

            service.second->displayInfo();
        }
    }

}
