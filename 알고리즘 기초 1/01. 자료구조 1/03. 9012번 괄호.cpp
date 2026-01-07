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
        string ps;
        getline(cin, ps);

        int flag = 1;
        vector<char> stk;
        for (char c : ps) {
            if (c == '(') {
                stk.push_back('(');
            } else {
                if (stk.empty()) {
                    flag = 0;
                    break;
                } else {
                    stk.pop_back();
                }
            }
        }

        if (flag && stk.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}