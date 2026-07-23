#include <iostream>
using namespace std;

void reverseWord(char arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char word[100];
    cin >> word;
    int size = 0;
    while (word[size] != '\0') {
        size++;
    }
    reverseWord(word, size);
    cout << "Reversed Word: " << word << endl;
    return 0;
}
