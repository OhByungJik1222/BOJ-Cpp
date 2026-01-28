#include <iostream>
#include <vector>
using namespace std;

int gcd(int num1, int num2) {
    while (num2 != 0) {
        int rest = num1 % num2;
        num1 = num2;
        num2 = rest;
    }

    return num1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long gcd_sum = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                gcd_sum += gcd(arr[i], arr[j]);
            }
        }
        cout << gcd_sum << '\n';
    }

    return 0;
}