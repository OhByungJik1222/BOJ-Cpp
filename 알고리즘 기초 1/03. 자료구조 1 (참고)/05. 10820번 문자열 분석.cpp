#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (getline(cin, s)) {
        vector<int> a(4, 0);
        
        for (char c : s) {
            if (c - 'a' >= 0 && c - 'a' <= 'z' - 'a') a[0]++;
            else if (c - 'A' >= 0 && c - 'A' <= 'Z' - 'A') a[1]++;
            else if (c >= '0' && c <= '9') a[2]++;
            else if (c == ' ') a[3]++;
        }

        for (int i = 0; i < 4; i++) {
            cout << a[i];
            if (i != 3) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}