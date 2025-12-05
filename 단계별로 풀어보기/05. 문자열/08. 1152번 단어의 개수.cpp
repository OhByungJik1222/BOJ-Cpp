#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int ans = 1;

    if (s.front() == ' ') ans--;
    if (s.back() == ' ') ans--;


    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') ans++;
    }
    cout << ans;
    return 0;
}