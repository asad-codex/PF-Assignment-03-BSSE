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
    int result = data[0][0];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (i == 0 && j == 0) continue;
            result -= data[i][j];
        }
    }
    cout << result << endl;
    return 0;
}
