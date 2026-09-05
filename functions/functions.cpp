#include <iostream>
using namespace std;

void sayHi(string name, int age) {
    cout << "Hello " << name << " You are " << age << endl;
}

double cube(double num) {
    double result = num * num * num;
    return result;
}

int power(int baseNum, int powNum) {
    int result = 1;

    for (int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }

    return result;
}

int main() {
    sayHi("Mike", 20);
    sayHi("Tom", 60);
    sayHi("Steve", 35);

    cout << cube(5.0) << endl;
    cout << power(10, 2) << endl;

    return 0;
}
