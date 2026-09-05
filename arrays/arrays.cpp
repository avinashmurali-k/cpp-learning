#include <iostream>
using namespace std;

int main() {

    // 1D array
    int luckyNums[] = {1, 3, 7, 35, 6, 8};

    cout << "Element at index 3: " << luckyNums[3] << endl;

    luckyNums[3] = 19;

    cout << "After changing index 3: " << luckyNums[3] << endl;

    // 2D array
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    cout << "Element at [1][1]: " << numberGrid[1][1] << endl;

    // Nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << numberGrid[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
