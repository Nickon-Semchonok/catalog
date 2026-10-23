#pragma once
#include "Asset.h"

class Vehicle : public Asset {
private:
    int mileage;
public:
    int getMileage() const;
    Vehicle* setMileage(int mileage);
};
