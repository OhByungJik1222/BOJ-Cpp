#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p[n + 1];
    for (int i = 1; i <= n; i++) cin >> p[i];

    int dp[n + 1] = { 0 };
    for (int i = 1; i <= n; i++) {
        dp[i] = p[i];
        for (int j = 0; j <= i / 2; j++) {
            dp[i] = max(dp[i], dp[j] + dp[i - j]);
        } 
    }
    cout << dp[n];

    return 0;
}