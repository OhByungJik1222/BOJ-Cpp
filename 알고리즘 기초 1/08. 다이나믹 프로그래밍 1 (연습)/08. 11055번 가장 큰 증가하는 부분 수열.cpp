#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        dp[i] = tmp;
    }

    int ans = dp[0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;

    return 0;
}