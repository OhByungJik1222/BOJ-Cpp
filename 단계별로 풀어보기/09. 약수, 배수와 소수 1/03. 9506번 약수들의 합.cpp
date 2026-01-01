#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        long long n;
        cin >> n;

        if (n == -1) return 0;

        vector<long long> remain;
        long long sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                remain.push_back(i);
                sum += i;
            }
        }

        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < remain.size() - 1; i++) {
                cout << remain[i] << " + ";
            }
            cout << remain.back() << '\n';
        } else {
            cout << n << " is NOT perfect.\n";
        }
    }
}