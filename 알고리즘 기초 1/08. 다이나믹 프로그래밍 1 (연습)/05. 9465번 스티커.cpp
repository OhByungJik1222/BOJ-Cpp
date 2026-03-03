#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> stk(2, vector<int>(n + 1, 0));
        for (int i = 0; i <= 1; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> stk[i][j];
            }
        }

        vector<vector<long long>> dp(2, vector<long long>(n + 1, 0));
        dp[0][1] = stk[0][1];
        dp[1][1] = stk[1][1];

        long long ans = max(dp[0][1], dp[1][1]);
        for (int i = 2; i <= n; i++) {
            dp[0][i] = stk[0][i] + max({dp[1][i - 1], dp[0][i - 2], dp[1][i - 2]});
            dp[1][i] = stk[1][i] + max({dp[0][i - 1], dp[0][i - 2], dp[1][i - 2]});
            ans = max({ans, dp[0][i], dp[1][i]});
        }
        cout << ans << '\n';
    }

    return 0;
}