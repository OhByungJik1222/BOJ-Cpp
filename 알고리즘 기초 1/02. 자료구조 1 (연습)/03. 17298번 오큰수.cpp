#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long a[n + 1];
    long long ans[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> stk;
    for (int idx = 0; idx < n; idx++) {
        if (stk.empty()) {
            stk.push_back(idx);
        } else {
            while (!stk.empty() && a[stk.back()] < a[idx]) {
                ans[stk.back()] = a[idx];
                stk.pop_back();
            }
            stk.push_back(idx);
        }
    }

    for (long long idx : stk) {
        ans[idx] = -1;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i != n - 1) cout << ' ';
    }
    
    return 0;
}