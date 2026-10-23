#include <iostream>
#include <vector>
#include "Laptop.h"
#include "Monitor.h"

int main() {
    // 1. Створення масиву (вектора) з різними об'єктами через їх батьківський тип (Product*)
    std::vector<Product*> catalog;

    // Додавання ноутбука (з використанням каскадного виклику методів / fluent interface)
    Laptop* laptop = new Laptop();
    laptop->setName("MacBook Pro")
        ->setPrice(79999.0)
        ->setHardware("Apple M3 Max, 32GB")
        ->setPower(100);
    catalog.push_back(laptop);

    // Додавання монітора
    Monitor* monitor = new Monitor();
    monitor->setName("Dell UltraSharp")
        ->setPrice(18500.0)
        ->setDiagonal(27.0)
        ->setPower(45);
    catalog.push_back(monitor);

    // 2. За допомогою циклу вивести об'єкти на екран (реалізація поліморфізму)
    std::cout << "=== Каталог електроніки (Д.З.) ===\n";
    for (const auto& item : catalog) {
        // Викликається відповідний переозначений метод toString() для кожного класу
        std::cout << item->toString() << std::endl;
    }

    // 3. Звільнення динамічної пам'яті
    for (auto& item : catalog) {
        delete item;
    }
    catalog.clear();

    return 0;
}