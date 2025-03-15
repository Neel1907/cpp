#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;
public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    void displayInfo() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int seatingCapacity;
public:
    Car(string mk, string mdl, int yr, int seats) : Vehicle(mk, mdl, yr), seatingCapacity(seats) {}

    void displayCarInfo() {
        displayInfo();
        cout << "Seating Capacity: " << seatingCapacity << " persons" << endl;
    }
};

class Truck : public Vehicle {
protected:
    float loadCapacity;
public:
    Truck(string mk, string mdl, int yr, float load) : Vehicle(mk, mdl, yr), loadCapacity(load) {}

    void displayTruckInfo() {
        displayInfo();
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
    }
};

int main() {
    Car car("Toyota", "fortuner", 2022, 5);
    Truck truck("TATA", "avtar", 2021, 3.5);

    cout << "Car Details:" << endl;
    car.displayCarInfo();

    cout << "\nTruck Details:" << endl;
    truck.displayTruckInfo();

    return 0;
}

