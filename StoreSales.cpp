#include <iostream>
using namespace std;

int main() {
    int P, W;
    cin >> P >> W;
    int sales[P][W];
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < W; j++) {
            cin >> sales[i][j];
        }
    }
    for (int i = 0; i < P; i++) {
        int total = 0;
        for (int j = 0; j < W; j++) {
            total += sales[i][j];
        }
        cout << total << endl;
    }
    return 0;
}
