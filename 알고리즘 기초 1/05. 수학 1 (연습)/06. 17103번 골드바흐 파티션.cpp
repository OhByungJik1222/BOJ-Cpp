#include <iostream>
#include <vector>
using namespace std;

int MAX = 1000000;

vector<int> seive_of_eratosthenes(int n) {
    vector<int> is_prime(n + 1, 1);

    is_prime[0] = 0;
    is_prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    return is_prime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> is_prime = seive_of_eratosthenes(MAX);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;
        for (int i = 2; i < n; i++) {
            int a = i;
            int b = n - i;
            if (a > b) break;

            if (is_prime[a] && is_prime[b]) ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}