#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;

class Customer {
public:
    string name;
    string address;

    Customer(string n, string addr) : name(n), address(addr) {}

    void displayDetails() {
        cout << "Customer: " << name << " (" << address << ")" << endl;
    }
};

#endif // CUSTOMER_H

