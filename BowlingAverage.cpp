#include <iostream>
using namespace std;

double getBowlingAverage(int runsConceded, int wicketsTaken) {
    if (wicketsTaken == 0) {
        return 0.0;
    }
    return (double)runsConceded / wicketsTaken;
}

int main() {
    int runsConceded, wicketsTaken;
    cin >> runsConceded >> wicketsTaken;
    cout << "Bowling Average: " << getBowlingAverage(runsConceded, wicketsTaken) << endl;
    return 0;
}
