#include <iostream>
using namespace std;

double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int n;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << calculateAverage(scores, n) << endl;
    return 0;
}
