#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp_i(n, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                dp_i[i] = max(dp_i[i], dp_i[j] + 1);
            }
        }
    }

    vector<int> dp_d(n, 1);
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (a[i] > a[j]) {
                dp_d[i] = max(dp_d[i], dp_d[j] + 1);
            }
        }
    }

    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans = max(ans, dp_i[i] + dp_d[i] - 1);
    }
    cout << ans;

    return 0;
}