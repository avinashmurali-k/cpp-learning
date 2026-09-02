#include <iostream>
using namespace std;

int main() {

    int num = 5;

    cout << "Initial value: " << num << endl;

    num++;
    cout << "After increment: " << num << endl;

    num--;
    cout << "After decrement: " << num << endl;

    num += 80;
    cout << "After += 80: " << num << endl;

    num -= 20;
    cout << "After -= 20: " << num << endl;

    num *= 2;
    cout << "After *= 2: " << num << endl;

    return 0;
}
