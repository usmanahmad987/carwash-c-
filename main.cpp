#include <iostream>
#include "Car.h"
#include "Customer.h"
#include "Service.h"
#include "Worker.h"
#include "Register.h"

using namespace std;

int main() {
    // User inputs for Car
    string carModel, carRegNum;
    cout << "Enter Car Model: ";
    cin >> carModel;
    cout << "Enter Car Registration Number: ";
    cin >> carRegNum;
    Car car1(carModel, carRegNum);

    // User inputs for Customer
    string custName, custAddress;
    cout << "Enter Customer Name: ";
    cin >> custName;
    cout << "Enter Customer Address: ";
    cin >> custAddress;
    Customer cust1(custName, custAddress);

    // User inputs for Service
    string serviceType;
    cout << "Enter Service Type (e.g., Soap Only, Soap & Polish, Soap & Polish + inner clean): ";
    cin >> serviceType;
    Service service1(serviceType);

    // User inputs for Worker
    string workerName;
    cout << "Enter Worker Name: ";
    cin >> workerName;
    Worker worker1(workerName);

    // Registering Service
    Register reg(&car1, &cust1, &service1, &worker1);

    // Displaying Details
    reg.displayDetails();

    return 0;
}

