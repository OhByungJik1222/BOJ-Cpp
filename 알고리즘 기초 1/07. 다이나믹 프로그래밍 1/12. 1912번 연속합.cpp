#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<long long> dp(n);
    dp[0] = arr[0];

    long long ans = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans;

    return 0;
}