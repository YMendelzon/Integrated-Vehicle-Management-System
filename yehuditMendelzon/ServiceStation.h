#pragma once
#ifndef SERVICESTATION_H
#define SERVICESTATION_H

#include "Vehicle.h"
#include <queue>

namespace VDMS {

    class ServiceStation {
        std::queue<std::pair<ServiceType, Vehicle*>> serviceQueue;

    public:
        void addService(ServiceType type, Vehicle* vehicle);
        void processServices();
    };

}

#endif // SERVICESTATION_H
