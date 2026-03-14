#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }
    cout << dp[n][k];

    return 0;
}