#include <iostream>
using namespace std;

int main() {
    long long x;
    int n;

    cin >> x;
    cin >> n;

    long long a, sum = 0;
    int b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += a * b;
    }

    if (x == sum) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}