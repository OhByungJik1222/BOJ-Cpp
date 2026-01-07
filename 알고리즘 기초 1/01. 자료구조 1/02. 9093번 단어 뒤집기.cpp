#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        vector<char> stk;
        for (char c : s) {
            if (c == ' ') {
                while (stk.size() != 0) {
                    cout << stk.back();
                    stk.pop_back();
                }
                cout << ' ';
            } else {
                stk.push_back(c);
            }
        }

        while (stk.size() != 0) {
            cout << stk.back();
            stk.pop_back();
        }
        cout << '\n';
    }
    return 0;
}