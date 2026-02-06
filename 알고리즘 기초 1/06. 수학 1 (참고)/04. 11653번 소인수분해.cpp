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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> is_prime = seive_of_eratosthenes(n);

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            while (n % i == 0) {
                cout << i << '\n';
                n /= i;
            }
        }
    }

    return 0;
}