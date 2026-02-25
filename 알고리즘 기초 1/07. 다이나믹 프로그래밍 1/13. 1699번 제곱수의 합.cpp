#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++) dp[i] = i;
    for (int i = 1; i * i <= n; i++) dp[i * i] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], dp[i - (j * j)] + dp[j * j]);
        }
    }
    cout << dp[n];

    return 0;
}