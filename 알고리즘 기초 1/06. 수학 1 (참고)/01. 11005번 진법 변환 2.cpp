#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, b;
    cin >> n >> b;

    string ans;
    while (n != 0) {
        int res = n % b;

        if (res >= 10) {
            ans.push_back(char('A' + (res - 10)));
        } else {
            ans.push_back(res + '0');
        }
        n /= b;
    }

    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}