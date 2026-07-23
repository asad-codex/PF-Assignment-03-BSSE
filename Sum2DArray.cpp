#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int marks[R][C];
    int sum = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> marks[i][j];
            sum += marks[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}
