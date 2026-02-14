#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> p(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        dp[i] = p[i];
        for (int j = 0; j <= i/2; j++) {
            dp[i] = min(dp[i], dp[i - j] + dp[j]);
        }
    }
    cout << dp[n];

    return 0;
}