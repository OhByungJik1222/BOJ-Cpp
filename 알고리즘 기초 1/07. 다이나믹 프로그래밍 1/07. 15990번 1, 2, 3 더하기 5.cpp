#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000009

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int max_n = 0;
    vector<int> nlist;
    while (t--) {
        int n;
        cin >> n;

        max_n = max(max_n, n);
        nlist.push_back(n);
    }

    vector<vector<long long>> dp(max_n + 1, vector<long long>(4, 0));
    if (max_n >= 1) dp[1][1] = 1;
    if (max_n >= 2) dp[2][2] = 1;
    if (max_n >= 3) dp[3][1] = dp[3][2] = dp[3][3] = 1;

    for (int i = 4; i <= max_n; i++) {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MOD;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MOD;
    }

    for (int n : nlist) {
        cout << (dp[n][1] + dp[n][2] + dp[n][3]) % MOD << '\n';
    }

    return 0;
}