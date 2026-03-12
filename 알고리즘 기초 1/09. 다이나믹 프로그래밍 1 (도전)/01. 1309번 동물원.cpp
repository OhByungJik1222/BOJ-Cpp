#include <iostream>
#include <vector>
using namespace std;

#define MOD 9901
#define SIZE (1 << 2) - 1

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(SIZE, 0));
    dp[0][0] = dp[0][1] = dp[0][2] = 1;
    for (int i = 1; i < n; i++) {
        for (int curr = 0; curr < SIZE; curr++) {
            for (int prev = 0; prev < SIZE; prev++) {
                if (dp[i - 1][prev] && !(curr & prev)) {
                    dp[i][curr] += dp[i - 1][prev];
                    dp[i][curr] %= MOD;
                }
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i < SIZE; i++) {
        ans += dp[n - 1][i];
        ans %= MOD;
    }
    cout << ans;

    return 0;
}