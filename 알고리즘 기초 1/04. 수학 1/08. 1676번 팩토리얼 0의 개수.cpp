#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i <= n; i += 5) {
        for (int j = 5; j <= i; j *= 5) {
            if (i % j == 0) {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}