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
    vector<char> ans;
    for (char c : s) {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')') {
            if (c == '(') {
                stk.push_back(c);
            } else if (c == '*' || c == '/') {
                while (!stk.empty() && (stk.back() == '*' || stk.back() == '/')) {
                    ans.push_back(stk.back());
                    stk.pop_back();
                }
                stk.push_back(c);
            } else if (c == '+' || c == '-') {
                while (!stk.empty() && stk.back() != '(') {
                    ans.push_back(stk.back());
                    stk.pop_back();
                }
                stk.push_back(c);
            } else if (c == ')') {
                while (!stk.empty() && stk.back() != '(') {
                    ans.push_back(stk.back());
                    stk.pop_back();
                }
                stk.pop_back();
            }
        } else {
            ans.push_back(c);
        }
    }

    while (!stk.empty()) {
        ans.push_back(stk.back());
        stk.pop_back();
    }

    for (char c : ans) cout << c;

    return 0;
}