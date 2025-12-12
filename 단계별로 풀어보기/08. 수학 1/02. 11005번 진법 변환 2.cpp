#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    long long num;
    int base;

    cin >> num >> base;

    vector<char> ans;
    while (num != 0) {
        ans.push_back(s[num % base]);
        num /= base;
    }

    int len = ans.size();
    for (int i = 0; i < len; i++) {
        cout << ans.back();
        ans.pop_back();
    }
}