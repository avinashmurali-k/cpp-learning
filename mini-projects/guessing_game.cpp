#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "Aswin";
    string rightPassword;
    int passwordCount = 0;
    int passwordLimit = 3;
    bool outOfGuesses = false;

    while (password != rightPassword && !outOfGuesses) {
        if (passwordCount < passwordLimit) {
            cout << "Enter the password: ";
            cin >> rightPassword;
            passwordCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "Who Are You!";
    } else {
        cout << "Welcome User!";
    }

    return 0;
}
