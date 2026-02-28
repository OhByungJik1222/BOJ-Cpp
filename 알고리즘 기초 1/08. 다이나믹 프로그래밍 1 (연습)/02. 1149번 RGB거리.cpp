#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000001

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> dp[i][j];
        }
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
    }

    int ans = MAX;
    for (int i = 0; i < 3; i++) {
        ans = min(ans, dp[n - 1][i]);
    }
    cout << ans;

    return 0;
}