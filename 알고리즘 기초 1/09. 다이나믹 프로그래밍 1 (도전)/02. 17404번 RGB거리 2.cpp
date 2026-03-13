#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 1001

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<vector<int>>> dp(3, vector<vector<int>>(n, vector<int>(3)));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            int tmp;
            cin >> tmp;

            dp[0][i][j] = dp[1][i][j] = dp[2][i][j] = tmp;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j) dp[i][0][j] = MAX;
        }
        dp[i][n - 1][i] = MAX;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            dp[j][i][0] += min(dp[j][i - 1][1], dp[j][i - 1][2]);
            dp[j][i][1] += min(dp[j][i - 1][0], dp[j][i - 1][2]);
            dp[j][i][2] += min(dp[j][i - 1][0], dp[j][i - 1][1]);
        }
    }

    int ans = dp[0][n - 1][0];
    for (int i = 0; i < 3; i++) {
        ans = min({ ans, dp[i][n - 1][0], dp[i][n - 1][1], dp[i][n - 1][2]});
    }
    cout << ans;

    return 0;
}