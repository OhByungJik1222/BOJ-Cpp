#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<char> left;
    vector<char> right;

    string init;
    getline(cin, init);

    for (char c : init) {
        left.push_back(c);
    }

    long long m;
    cin >> m;
    cin.ignore();

    while (m--) {
        string cmd;
        cin >> cmd;

        if (cmd == "L" && !left.empty()) {
            right.push_back(left.back());
            left.pop_back();
        } else if (cmd == "D" && !right.empty()) {
            left.push_back(right.back());
            right.pop_back();
        } else if (cmd == "B" && !left.empty()) {
            left.pop_back();
        } else if (cmd == "P") {
            char c;
            cin >> c;

            left.push_back(c);
        }
    }

    while (!right.empty()) {
        left.push_back(right.back());
        right.pop_back();
    }

    for (char c : left) cout << c;

    return 0;
}