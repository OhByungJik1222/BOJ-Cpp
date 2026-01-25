#include <iostream>
#include <vector>
#include <algorithm>
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

    int max_val = 1000000;
    vector<int> is_prime = seive_of_eratosthenes(max_val);

    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        int flag = 0;
        for (int i = 3; i <= n; i++) {
            if (is_prime[i] && is_prime[n - i]) {
                cout << n << " = " << i << " + " << n - i << '\n';
                flag = 1;
                break;
            }
        }
        if (flag == 0) cout << "Goldbach's conjecture is wrong." << '\n';
    }

    return 0;
}