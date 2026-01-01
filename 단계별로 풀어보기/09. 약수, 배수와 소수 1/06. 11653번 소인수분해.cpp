#include <iostream>
#include <vector>
using namespace std;

vector<int> seive_of_eratosthenes(long long n) {
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

    vector<int> prime;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) prime.push_back(i);
    }

    return prime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<int> prime = seive_of_eratosthenes(n);

    for (int p : prime) {
        while (n % p == 0) {
            cout << p << '\n';
            n /= p;
        }
    }
    return 0;
}