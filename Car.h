#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string model;
    string registrationNumber;

    Car(string mod, string regNum) : model(mod), registrationNumber(regNum) {}

    void displayDetails() {
        cout << "Car: " << model << " (" << registrationNumber << ")" << endl;
    }
};

#endif // CAR_H

