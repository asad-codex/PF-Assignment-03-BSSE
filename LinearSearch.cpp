#include <iostream>
using namespace std;

bool findPlayer(char arr[], int size, char target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    char team[] = {'b', 'r', 's', 'i', 'f', 'h', 'n', 'a', 'm', 'w', 'z'};
    int size = 11;
    char target;
    cin >> target;
    if (findPlayer(team, size, target)) {
        cout << "Player is in the team" << endl;
    } else {
        cout << "Player not found" << endl;
    }
    return 0;
}
