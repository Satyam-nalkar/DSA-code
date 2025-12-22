#include<iostream>
using namespace std;

class Vehicle {
public:
    int speed;

    void start() {
        cout << "Vehicle started" << endl;
    }
};


class Car : public Vehicle {
public:
    void openAC() {
        cout << "AC turned on" << endl;
    }
};


int main() {
    Car myCar;

    myCar.speed = 80;   // inherited variable
    myCar.start();     // inherited method
    myCar.openAC();    // car-specific method
}
