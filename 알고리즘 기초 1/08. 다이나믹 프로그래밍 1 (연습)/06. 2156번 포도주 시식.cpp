#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> wine(n);
    for (int i = 0; i < n; i++) {
        cin >> wine[i];
    }

    if (n == 1) {
        cout << wine[0];
    } else {
        vector<long long> dp(n, 0);
        dp[0] = wine[0];
        dp[1] = wine[0] + wine[1];

        for (int i = 2; i < n; i++) {
            long long dp3 = (i == 2) ? 0 : dp[i - 3];
            dp[i] = max({dp[i - 1], dp[i - 2] + wine[i], wine[i - 1] + wine[i] + dp3});
        }
        cout << dp[n - 1];
    }

    return 0;
}