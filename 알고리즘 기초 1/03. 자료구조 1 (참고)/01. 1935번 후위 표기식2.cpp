#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    string s;
    getline(cin, s);

    double num[n + 1];
    for (int i = 0; i < n; i++) cin >> num[i];

    double a, b;
    vector<double> stk;
    for (char c : s) {
        if (c == '+') {
            b = stk.back();
            stk.pop_back();
            a = stk.back();
            stk.pop_back();

            stk.push_back(a + b);
        } else if (c == '-') {
            b = stk.back();
            stk.pop_back();
            a = stk.back();
            stk.pop_back();

            stk.push_back(a - b);
        } else if (c == '*') {
            b = stk.back();
            stk.pop_back();
            a = stk.back();
            stk.pop_back();

            stk.push_back(a * b);
        } else if (c == '/') {
            b = stk.back();
            stk.pop_back();
            a = stk.back();
            stk.pop_back();

            stk.push_back(a / b);
        } else {
            stk.push_back(num[c - 'A']);
        }
    }
    cout << fixed << setprecision(2) << stk.front();

    return 0;
}