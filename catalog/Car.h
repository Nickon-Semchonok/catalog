#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
private:
    std::string transmission;
public:
    std::string getTransmission() const;
    Car* setTransmission(std::string transmission);
    std::string toString() const override;
};
