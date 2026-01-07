#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> stk;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int num;
            cin >> num;
            stk.push_back(num);
        } else if (cmd == "pop") {
            if (stk.size() == 0) cout << -1 << '\n';
            else {
                cout << stk.back() << '\n';
                stk.pop_back();
            }
        } else if (cmd == "size") {
            cout << stk.size() << '\n';
        } else if (cmd == "empty") {
            if (stk.size() == 0) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if (cmd == "top") {
            if (stk.size() == 0) cout << -1 << '\n';
            else cout << stk.back() << '\n';
        }
    }
    return 0;
}