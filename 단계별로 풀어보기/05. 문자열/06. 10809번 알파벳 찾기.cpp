#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int arr[26];
    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    for (int i = 0; i < word.size(); i++) {
        int idx = word[i] - 'a';
        if (arr[idx] == -1) {
            arr[idx] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}