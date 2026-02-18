#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++) ans[i].push_back(a[i]);
    
    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] && dp[i] <= dp[j]) {
                dp[i] = dp[j] + 1;
                ans[i] = ans[j];
                ans[i].push_back(a[i]);
            }
        }
    }

    int max_len = 0;
    int idx;
    for (int i = 0; i < n; i++) {
        if (dp[i] > max_len) {
            max_len = dp[i];
            idx = i;
        }
    }

    cout << max_len << '\n';
    for (int x : ans[idx]) {
        cout << x << ' ';
    }

    return 0;
}