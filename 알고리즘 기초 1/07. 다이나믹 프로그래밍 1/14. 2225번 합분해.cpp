#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<vector<long long>> dp(k + 1, vector<long long> (n + 1, 0));
    for (int i = 1; i <= k; i++) {
        dp[i][1] = i;
        for (int j = 2; j <= n; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }
    cout << dp[k][n];

    return 0;
}