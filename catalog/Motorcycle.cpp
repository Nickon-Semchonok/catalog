#include "Motorcycle.h"
#include <format>

double Motorcycle::getEngineVolume() const {
    return engineVolume;
}

Motorcycle* Motorcycle::setEngineVolume(double engineVolume) {
    this->engineVolume = engineVolume;
    return this;
}

std::string Motorcycle::toString() const {
    return std::format(
        "{} {}L {} hrn/day ({} km)",
        getTitle(),
        engineVolume,
        getPricePerDay(),
        getMileage()
    );
}