#ifndef REGISTER_H
#define REGISTER_H

#include "Car.h"
#include "Customer.h"
#include "Service.h"
#include "Worker.h"

class Register {
public:
    Car* car;
    Customer* customer;
    Service* service;
    Worker* worker;

    Register(Car* c, Customer* cust, Service* srv, Worker* wkr)
        : car(c), customer(cust), service(srv), worker(wkr) {}

    void displayDetails() {
        cout << "\nService Record:" << endl;
        car->displayDetails();
        customer->displayDetails();
        service->displayDetails();
        worker->displayDetails();
    }
};

#endif // REGISTER_H

