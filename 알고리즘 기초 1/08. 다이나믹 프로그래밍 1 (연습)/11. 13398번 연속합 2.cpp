#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> dp1(n);
    vector<long long> dp2(n);
    dp1[0] = dp2[0] = arr[0];

    long long ans = arr[0];
    for (int i = 1; i < n; i++) {
        dp1[i] = max(arr[i], dp1[i - 1] + arr[i]);
        dp2[i] = max(dp1[i - 1], dp2[i - 1] + arr[i]);
        ans = max({ ans, dp1[i], dp2[i]});
    }
    cout << ans;

    return 0;
}