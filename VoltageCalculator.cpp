#include <iostream>
using namespace std;

double calculateVoltage(double current, double resistance) {
    return current * resistance;
}

int main() {
    double current, resistance;
    cin >> current >> resistance;
    cout << "Total Voltage: " << calculateVoltage(current, resistance) << " V" << endl;
    return 0;
}
