#include "Asset.h"

std::string Asset::getTitle() const {
    return title;
}

Asset* Asset::setTitle(std::string title) {
    this->title = title;
    return this;
}

double Asset::getPricePerDay() const {
    return pricePerDay;
}

Asset* Asset::setPricePerDay(double pricePerDay) {
    this->pricePerDay = pricePerDay;
    return this;
}