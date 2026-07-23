#include <iostream>
using namespace std;

int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;
    cout << base << " raised to the power " << exponent << " is: " << calculatePower(base, exponent) << endl;
    return 0;
}
