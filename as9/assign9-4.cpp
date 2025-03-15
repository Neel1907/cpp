#include <iostream>
using namespace std;

class Vehicle {
protected:
    string name, model;
public:
    Vehicle(string n, string m) : name(n), model(m) {}

    void displayInfo() {
        cout << "Vehicle Name: " << name << ", Model: " << model << endl;
    }
};

class Car : public Vehicle {
protected:
    string fuelType;
public:
    Car(string n, string m, string fuel) : Vehicle(n, m), fuelType(fuel) {}

    void displayFuelType() {
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class ElectricCar : public Car {
private:
    float batteryCapacity;
public:
    ElectricCar(string n, string m, string fuel, float battery)
        : Car(n, m, fuel), batteryCapacity(battery) {}

    void displayBatteryCapacity() {
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar tesla("Tesla", "plaid", "Electric", 100.0);
    tesla.displayInfo();
    tesla.displayFuelType();
    tesla.displayBatteryCapacity();
    return 0;
}

