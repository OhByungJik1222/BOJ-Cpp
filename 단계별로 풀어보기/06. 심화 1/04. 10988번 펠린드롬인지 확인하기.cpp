#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.size();
    bool flag = true;
    for (int i = 0; i < len / 2 + 1; i++) {
        if (s[i] != s[len - i - 1]) {
            flag = false;
        }
    }
    
    if (flag) cout << 1;
    else cout << 0;
    return 0;
}