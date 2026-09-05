#include <iostream>
using namespace std;

class Car {
public:
    string Brand;
    string color;
    string model;
};

int main() {
    Car car1;

    car1.Brand = "BMW";
    car1.color = "black";
    car1.model = "M5";

    Car car2;

    car2.Brand = "AUDI";
    car2.color = "White";
    car2.model = "R8";

    cout << car1.Brand << endl;
    cout << car1.color << endl;
    cout << car1.model << endl;

    cout << car2.Brand << endl;
    cout << car2.color << endl;
    cout << car2.model << endl;

    return 0;
}
