#include <iostream>
#include <vector>
using namespace std;

#define MAX 11

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> dp(MAX + 1, 1);
    dp[2] = 2;

    for (int i = 3; i <= MAX; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << dp[n] << '\n';
    }

    return 0;
}