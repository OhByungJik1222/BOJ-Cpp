#include <iostream>
#include <vector>
using namespace std;

#define MOD 9901

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(3, 0));
    dp[0][0] = dp[0][1] = dp[0][2] = 1;
    for (int i = 1; i < n; i++) {
        for (int curr = 0; curr <= 2; curr++) {
            for (int prev = 0; prev <= 2; prev++) {
                if ((curr & prev) == 0) {
                    dp[i][curr] += dp[i - 1][prev];
                    dp[i][curr] %= MOD;
                }
            }
        }
    }
    cout << (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]) % MOD;

    return 0;
}