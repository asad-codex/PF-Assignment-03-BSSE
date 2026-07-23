#include <iostream>
using namespace std;

int calculateLowest(int arr[], int size) {
    int lowest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }
    return lowest;
}

int calculateHighest(int arr[], int size) {
    int highest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    return highest;
}

int main() {
    int n;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    cout << "Lowest: " << calculateLowest(scores, n) << endl;
    cout << "Highest: " << calculateHighest(scores, n) << endl;
    return 0;
}
