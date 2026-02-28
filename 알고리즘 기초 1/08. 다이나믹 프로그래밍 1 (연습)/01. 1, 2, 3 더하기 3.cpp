#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000009

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> n_list;
    int max_n = 0;
    while (t--) {
        int n;
        cin >> n;
        n_list.push_back(n);
        max_n = max(max_n, n);
    }   

    vector<long long> dp(max_n + 1, 1);
    dp[2] = 2;
    for (int i = 3; i <= max_n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        dp[i] %= MOD;
    }

    for (int n : n_list) {
        cout << dp[n] << '\n';
    }

    return 0;
}