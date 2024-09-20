#ifndef SERVICE_H
#define SERVICE_H

#include <iostream>
#include <string>

using namespace std;

class Service {
public:
    string serviceType;

    Service(string type) : serviceType(type) {}

    void displayDetails() {
        cout << "Service: " << serviceType << endl;
    }
};

#endif // SERVICE_H

