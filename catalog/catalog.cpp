#include <iostream>
#include <vector>
#include "Car.h"
#include "Motorcycle.h"

int main() {

    setlocale(0, "");

    std::vector<Asset*> rentalCatalog;

    Car* car = new Car();
    car->setTitle("Tesla Model 3");
    car->setPricePerDay(2500.0);
    car->setTransmission("Automatic");
    car->setMileage(15000);
    rentalCatalog.push_back(car);

    Motorcycle* moto = new Motorcycle();
    moto->setTitle("Yamaha MT-07");
    moto->setPricePerDay(1200.0);
    moto->setEngineVolume(0.7);
    moto->setMileage(5000);
    rentalCatalog.push_back(moto);

    std::cout << "=== Каталог оренди ===\n";
    for (const auto& item : rentalCatalog) {
        std::cout << item->toString() << std::endl;
    }

    for (auto& item : rentalCatalog) {
        delete item;
    }
    rentalCatalog.clear();

    return 0;
}