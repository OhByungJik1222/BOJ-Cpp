#include <iostream>
#include <vector>
using namespace std;

#define MOD 10007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] * 2) % MOD;
    }
    cout << dp[n];

    return 0;
}