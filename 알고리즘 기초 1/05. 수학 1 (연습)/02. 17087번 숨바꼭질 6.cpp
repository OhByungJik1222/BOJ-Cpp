#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int res = a % b;
        a = b;
        b = res;
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int pos;
        cin >> pos;

        if (i == 0) ans = std::abs(pos - s);
        else ans = gcd(ans, std::abs(pos - s));
    }
    cout << ans;

    return 0;
}