#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    cin >> celsius;
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << celsiusToFahrenheit(celsius) << endl;
    return 0;
}
