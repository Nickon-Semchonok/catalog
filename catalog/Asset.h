#pragma once
#include <string>

class Asset {
private:
    std::string title;
    double pricePerDay;
public:
    std::string getTitle() const;
    Asset* setTitle(std::string title);
    double getPricePerDay() const;
    Asset* setPricePerDay(double pricePerDay);

    virtual std::string toString() const = 0; // Чисто віртуальний метод
};
