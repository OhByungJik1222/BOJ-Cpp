#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long a[n + 1];
    long long max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }

    long long f[max_val + 1] = { 0 };
    for (int i = 0; i < n; i++) f[a[i]]++;

    long long ans[n + 1];
    vector<long long> stk;
    for (int idx = 0; idx < n; idx++) {
        while (!stk.empty() && f[a[stk.back()]] < f[a[idx]]) {
            ans[stk.back()] = a[idx];
            stk.pop_back();
        }
        stk.push_back(idx);
    }

    while (!stk.empty()) {
        ans[stk.back()] = -1;
        stk.pop_back();
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i != n - 1) cout << ' ';
    }

    return 0;
}