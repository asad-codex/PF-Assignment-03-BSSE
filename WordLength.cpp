#include <iostream>
using namespace std;

int getWordLength(char arr[]) {
    int count = 0;
    while (arr[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char word[100];
    cin >> word;
    cout << "Length of the word is: " << getWordLength(word) << endl;
    return 0;
}
