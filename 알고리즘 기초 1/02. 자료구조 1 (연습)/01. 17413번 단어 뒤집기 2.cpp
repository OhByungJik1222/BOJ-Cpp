#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int tag = 0;
    deque<char> stk;
    for (char c : s) {
        if (c == '<') {
            tag = 1;
            while (!stk.empty()) {
                cout << stk.back();
                stk.pop_back();
            }
            stk.push_back(c);
        } else if (c == ' ') {
            if (!tag) {
                while (!stk.empty()) {
                    cout << stk.back();
                    stk.pop_back();
                }
                cout << ' ';
            } else {
                stk.push_back(c);
            }
        } else if (c == '>') {
            tag = 0;
            stk.push_back(c);
            while (!stk.empty()) {
                cout << stk.front();
                stk.pop_front();
            }
        } else {
            stk.push_back(c);
        }
    }

    while (!stk.empty()) {
        cout << stk.back();
        stk.pop_back();
    }

    return 0;
}