#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    if (n >= 2) dp[2] = 3;
    for (int i = 4; i <= n; i += 2) {
        dp[i] = dp[i - 2] * dp[2];
        for (int j = 2; j < i - 2; j += 2) {
            dp[i] += dp[j] * 2;
        }
        dp[i] += 2;
    }
    cout << dp[n];

    return 0;
}