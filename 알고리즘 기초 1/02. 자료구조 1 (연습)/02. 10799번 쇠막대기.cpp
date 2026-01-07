#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    vector<char> stk;
    char prev = ' ';
    int ans = 0;
    for (char c : s) {
        if (c == '(') {
            stk.push_back(c);
        } else if (c == ')') {
            if (prev == '(') {
                stk.pop_back();
                ans += stk.size();
            } else if (prev == ')') {
                stk.pop_back();
                ans++;
            }
        }
        prev = c;
    }
    cout << ans;
    
    return 0;
}