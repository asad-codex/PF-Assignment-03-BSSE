#include <iostream>
#include <climits>
using namespace std;

int calculate2Low(int arr[], int size) {
    int lowest = INT_MAX, secondLowest = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < lowest) {
            secondLowest = lowest;
            lowest = arr[i];
        } else if (arr[i] < secondLowest && arr[i] != lowest) {
            secondLowest = arr[i];
        }
    }
    return secondLowest;
}

int calculate2High(int arr[], int size) {
    int highest = INT_MIN, secondHighest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }
    return secondHighest;
}

int main() {
    int n;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    cout << "2nd Lowest: " << calculate2Low(scores, n) << endl;
    cout << "2nd Highest: " << calculate2High(scores, n) << endl;
    return 0;
}
