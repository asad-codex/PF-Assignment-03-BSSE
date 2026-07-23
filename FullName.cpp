#include <iostream>
using namespace std;

void combineNames(char first[], char last[], char result[]) {
    int i = 0, j = 0;
    while (first[i] != '\0') {
        result[j] = first[i];
        i++;
        j++;
    }
    result[j] = ' ';
    j++;
    i = 0;
    while (last[i] != '\0') {
        result[j] = last[i];
        i++;
        j++;
    }
    result[j] = '\0';
}

int main() {
    char firstName[50], lastName[50], fullName[100];
    cin >> firstName;
    cin >> lastName;
    combineNames(firstName, lastName, fullName);
    cout << "Full Name: " << fullName << endl;
    return 0;
}
