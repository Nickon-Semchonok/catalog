#pragma once
#include "Asset.h"
#include <string>

class RealEstate : public Asset {
private:
    std::string location;
public:
    std::string getLocation() const;
    RealEstate* setLocation(std::string location);
};