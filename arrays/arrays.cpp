#include <iostream>
using namespace std;

int main() {

    // Declaring and initializing an array
    int luckyNums[] = {1, 3, 7, 35, 6, 8};

    // Accessing an array element
    cout << "Element at index 3: " << luckyNums[3] << endl;

    // Changing an array element
    luckyNums[3] = 19;
    cout << "After changing index 3: " << luckyNums[3] << endl;

    // Creating an array with a specific size
    int numbers[20] = {1, 3, 7, 35, 6, 8};

    numbers[10] = 100;
    cout << "Element at index 10: " << numbers[10] << endl;

    // Assigning a value to an array element
    int values[20];

    values[0] = 100;
    cout << "First element: " << values[0] << endl;

    return 0;
}
