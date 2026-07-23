#include <iostream>
using namespace std;

double calculateStrikeRate(int runs, int balls) {
    return ((double)runs / balls) * 100;
}

int main() {
    int runs, balls;
    cin >> runs >> balls;
    cout << "Strike Rate: " << calculateStrikeRate(runs, balls) << endl;
    return 0;
}
