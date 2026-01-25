#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> fact(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }
    cout << fact[n];

    return 0;
}