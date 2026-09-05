#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;
    string model;

    // Default constructor
    Car() {
        brand = "No Brand";
        color = "No Color";
        model = "No Model";
    }

    // Parameterized constructor
    Car(string aBrand, string aColor, string aModel) {
        brand = aBrand;
        color = aColor;
        model = aModel;
    }
};

int main() {
    // Object using parameterized constructor
    Car car1("BMW", "black", "M5");

    cout << car1.brand << endl;
    cout << car1.color << endl;
    cout << car1.model << endl;

    // Another object using parameterized constructor
    Car car2("AUDI", "White", "R8");

    cout << car2.brand << endl;
    cout << car2.color << endl;
    cout << car2.model << endl;

    // Object using default constructor
    Car car3;

    cout << car3.brand << endl;
    cout << car3.color << endl;
    cout << car3.model << endl;

    return 0;
}
