
#include <bits/stdc++.h>
using namespace std;

// Base class
class Vehicle {
public:
    string name;
    string model;
    int noty;

    Vehicle(string name, string model, int noty) {
        this->name = name;
        this->model = model;
        this->noty = noty;
    }

    void start() {
        cout << name << " is starting" << endl;
    }

    void stop() {
        cout << name << " is stopping" << endl;
    }
};

// Single inheritance: Car inherits Vehicle
class Car : public Vehicle {
public:
    int nod;
    string transmissionType;

    Car(string name, string model, int noty,
        int nod, string transmissionType)
        : Vehicle(name, model, noty) {
        this->nod = nod;
        this->transmissionType = transmissionType;
    }

    void start_ac() {
        cout << "AC started in " << name << endl;
    }
};

// Hierarchical inheritance: Motorcycle also inherits Vehicle
class Motorcycle : public Vehicle {
protected:
    string handlebar;
    string suspension;

public:
    Motorcycle(string name, string model, int noty,
               string handlebar, string suspension)
        : Vehicle(name, model, noty) {
        this->handlebar = handlebar;
        this->suspension = suspension;
    }

    void showMotorcycle() {
        cout << "Handlebar: " << handlebar << endl;
        cout << "Suspension: " << suspension << endl;
    }
};

// Multilevel inheritance: ElectricCar -> Car -> Vehicle
class ElectricCar : public Car {
public:
    int batteryCapacity;

    ElectricCar(string name, string model, int noty,
                int nod, string transmissionType,
                int batteryCapacity)
        : Car(name, model, noty, nod, transmissionType) {
        this->batteryCapacity = batteryCapacity;
    }

    void charge() {
        cout << name << " is charging" << endl;
    }
};

// Separate class for multiple inheritance
class GPS {
public:
    void navigate() {
        cout << "GPS navigation started" << endl;
    }
};

// Multiple inheritance: SmartCar inherits Car and GPS
class SmartCar : public Car, public GPS {
public:
    SmartCar(string name, string model, int noty,
             int nod, string transmissionType)
        : Car(name, model, noty, nod, transmissionType) {
    }
};

int main() {
    cout << "--- Single Inheritance ---" << endl;
    Car a("Alto", "Electric", 5, 4, "Automatic");
    a.start();
    a.start_ac();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Motorcycle m("BMW", "Electric", 6, "Straight", "Hydraulic");
    m.start();
    m.showMotorcycle();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    ElectricCar e("Tesla", "Model S", 5, 4, "Automatic", 100);
    e.start();
    e.start_ac();
    e.charge();
    cout << "Battery: " << e.batteryCapacity << " kWh" << endl;

    cout << "\n--- Multiple Inheritance ---" << endl;
    SmartCar s("Toyota", "Prius", 5, 4, "Automatic");
    s.start();
    s.navigate();

    return 0;
}
