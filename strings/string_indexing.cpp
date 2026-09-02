#include <iostream>
using namespace std;

int main() {

    string phrase = "Giraffe Academy";

    cout << "Character at index 2: " << phrase[2] << endl;

    phrase[0] = 'B';

    cout << "Modified string: " << phrase << endl;

    return 0;
}
