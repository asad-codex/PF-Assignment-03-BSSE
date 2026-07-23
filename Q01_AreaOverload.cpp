#include <iostream>
using namespace std;

double calculateArea(double side) {
    return side * side;
}

double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double side, length, width;
    cin >> side;
    cin >> length >> width;
    cout << "Area of Square: " << calculateArea(side) << endl;
    cout << "Area of Rectangle: " << calculateArea(length, width) << endl;
    return 0;
}
