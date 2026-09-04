#include <iostream>
using namespace std;

int main() {

    // While loop
    int index = 1;

    while (index <= 5) {
        cout << index << endl;
        index++;
    }

    // Do-while loop
    index = 6;

    do {
        cout << index << endl;
        index++;
    } while (index <= 5);

    return 0;
}
