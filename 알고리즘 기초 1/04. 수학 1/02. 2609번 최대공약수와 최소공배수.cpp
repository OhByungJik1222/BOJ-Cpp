#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int A = a, B = b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    int gcd = a;
    int lcm = A * B / gcd;
    cout << gcd << '\n' << lcm;

    return 0;
}