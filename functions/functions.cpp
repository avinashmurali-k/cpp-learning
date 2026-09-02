#include <iostream>
using namespace std;

// Function declaration / prototype
void sayHi(string name, int age);

int main() {

    // Calling a function
    sayHi("Mike", 20);
    sayHi("Tom", 60);
    sayHi("Steve", 35);

    return 0;
}

// Function definition
void sayHi(string name, int age) {
    cout << "Hello " << name << " You are " << age << endl;
}
