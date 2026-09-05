#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    double gpa = 8.5;
    string name = "Tom";

    // Memory addresses
    cout << "Address of age: " << &age << endl;
    cout << "Address of gpa: " << &gpa << endl;
    cout << "Address of name: " << &name << endl;

    // Pointers
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << "Pointer to age: " << pAge << endl;
    cout << "Pointer to gpa: " << pGpa << endl;
    cout << "Pointer to name: " << pName << endl;

    // Dereferencing pointers
    cout << "Value of age: " << *pAge << endl;
    cout << "Value of gpa: " << *pGpa << endl;
    cout << "Value of name: " << *pName << endl;

    return 0;
}
