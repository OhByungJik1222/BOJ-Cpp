#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<long long>> dp(n + 1, vector <long long>(10, 1));
    dp[1][0] = 0;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= 8; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
        }
        dp[i][0] = dp[i - 1][1];
        dp[i][9] = dp[i - 1][8];
    }
    
    long long ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans += dp[n][i];
        ans %= MOD;
    }
    cout << ans;

    return 0;
}