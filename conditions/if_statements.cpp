#include <iostream>
using namespace std;

int getMax(int num1, int num2) {
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

int getMax(int num1, int num2, int num3) {
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main() {
    bool isMale = false;
    bool isTall = true;

    if (isMale && isTall) {
        cout << "You are a tall male";
    } else if (isMale && !isTall) {
        cout << "You are a short male";
    } else if (!isMale && isTall) {
        cout << "You are tall but not male";
    } else {
        cout << "You are not male and not tall";
    }

    cout << endl;

    cout << "Maximum of 2 numbers: " << getMax(2, 5) << endl;
    cout << "Maximum of 3 numbers: " << getMax(2, 5, 6) << endl;

    return 0;
}
