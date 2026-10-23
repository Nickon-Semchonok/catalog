#include "Car.h"
#include <format>

std::string Car::getTransmission() const {
    return transmission;
}

Car* Car::setTransmission(std::string transmission) {
    this->transmission = transmission;
    return this;
}

std::string Car::toString() const {
    return std::format("{} {} hrn/day, {} trans, {} km",
        getTitle(),
        getPricePerDay(),
        transmission,
        getMileage()
    );
}