#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <string>

using namespace std;

class Worker {
public:
    string name;

    Worker(string n) : name(n) {}

    void displayDetails() {
        cout << "Worker: " << name << endl;
    }
};

#endif // WORKER_H

