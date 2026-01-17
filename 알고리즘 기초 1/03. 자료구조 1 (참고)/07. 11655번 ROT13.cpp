#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int len = 'z' - 'a' + 1;
    for (char c : s) {
        if ('a' <= c && c <= 'z') {
            if (c + 13 > 'z') cout << char(c + 13 - len);
            else cout << char(c + 13);
        } else if ('A' <= c && c <= 'Z') {
            if (c + 13 > 'Z') cout << char(c + 13 - len);
            else cout << char(c + 13);
        } else {
            cout << c;
        }
    }

    return 0;
}