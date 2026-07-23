#include <iostream>
using namespace std;

bool checkPassword(char saved[], char entered[]) {
    int i = 0;
    while (saved[i] != '\0' || entered[i] != '\0') {
        if (saved[i] != entered[i]) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    char savedPassword[100], enteredPassword[100];
    cin >> savedPassword;
    cin >> enteredPassword;
    if (checkPassword(savedPassword, enteredPassword)) {
        cout << "Login Successful" << endl;
    } else {
        cout << "Invalid Password" << endl;
    }
    return 0;
}
