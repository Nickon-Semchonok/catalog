#include "Vehicle.h"

int Vehicle::getMileage() const {
    return mileage;
}

Vehicle* Vehicle::setMileage(int mileage) {
    this->mileage = mileage;
    return this;
}