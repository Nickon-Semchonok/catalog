#include "RealEstate.h"

std::string RealEstate::getLocation() const {
    return location;
}

RealEstate* RealEstate::setLocation(std::string location) {
    this->location = location;
    return this;
}