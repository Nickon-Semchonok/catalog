#pragma once
#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    double engineVolume;
public:
    double getEngineVolume() const;
    Motorcycle* setEngineVolume(double engineVolume);
    std::string toString() const override;
};