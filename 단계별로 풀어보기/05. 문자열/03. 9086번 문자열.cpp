#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;

        cout << word.front() << word.back() << '\n';
    }
    return 0;
}