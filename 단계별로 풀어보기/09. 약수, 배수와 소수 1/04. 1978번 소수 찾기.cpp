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
    int n;
    cin >> n;

    vector<int> num(n);
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        max_val = max(max_val, num[i]);
    }

    vector<int> is_prime = seive_of_eratosthenes(max_val);

    int cnt = 0;
    for (int x : num) {
        if (is_prime[x]) cnt++;
    }
    cout << cnt;
    return 0;
}