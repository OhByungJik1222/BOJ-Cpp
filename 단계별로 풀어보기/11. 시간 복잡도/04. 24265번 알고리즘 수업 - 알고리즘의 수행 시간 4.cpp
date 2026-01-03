#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n + 1; j++) {
            ans++;
        }
    }
    cout << ans << '\n' << 2;
    return 0;
}