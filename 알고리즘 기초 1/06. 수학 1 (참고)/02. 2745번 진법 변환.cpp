#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int b;
    cin >> s >> b;

    reverse(s.begin(), s.end());

    long long ans = 0;
    long long tmp = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] > '9') {
            ans += (35 - ('Z' - s[i])) * tmp;
        } else {
            ans += (s[i] - '0') * tmp;
        }
        tmp *= b;
    }
    cout << ans;

    return 0;
}