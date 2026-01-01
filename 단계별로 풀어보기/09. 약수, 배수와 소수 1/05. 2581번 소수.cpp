#include <iostream>
#include <vector>
using namespace std;

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
    int m, n;
    cin >> m;
    cin >> n;

    vector<int> is_prime = seive_of_eratosthenes(n);

    int sum = 0;
    int min = 0;
    for (int i = m; i <= n; i++) {
        if (is_prime[i]) {
            if (min == 0) min = i;
            sum += i;
        }
    }

    if (sum == 0) cout << -1;
    else cout << sum << '\n' << min;

    return 0;
}