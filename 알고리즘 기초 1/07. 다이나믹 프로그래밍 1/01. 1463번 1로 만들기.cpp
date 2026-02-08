#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 1) {
        cout << 0;
    } else {
        vector<int> dp(n + 1, 0);
        dp[2] = 1;

        for (int i = 3; i <= n; i++) {
            int tmp;
            tmp = dp[i - 1] + 1;
            if (i % 2 == 0) {
                tmp = min(tmp, dp[i / 2] + 1);
            }
            if (i % 3 == 0) {
                tmp = min(tmp, dp[i / 3] + 1);
            }
            dp[i] = tmp;
        }
        cout << dp[n];
    }

    return 0;
}