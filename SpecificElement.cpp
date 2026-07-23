#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int data[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> data[i][j];
        }
    }
    int row, col;
    cin >> row >> col;
    cout << data[row][col] << endl;
    return 0;
}
