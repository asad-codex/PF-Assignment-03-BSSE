#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int seats[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> seats[i][j];
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
