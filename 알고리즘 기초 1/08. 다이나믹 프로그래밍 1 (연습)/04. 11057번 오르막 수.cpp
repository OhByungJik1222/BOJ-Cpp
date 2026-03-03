#include <iostream>
#include <vector>
using namespace std;

#define MOD 10007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> dp(n + 1, vector<int>(10, 1));
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            dp[i][j] = 0;
            for (int k = 0; k <= j; k++) {
                dp[i][j] += dp[i - 1][k];
                dp[i][j] %= MOD;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans += dp[n][i];
        ans %= MOD;
    }
    cout << ans;

    return 0;
}