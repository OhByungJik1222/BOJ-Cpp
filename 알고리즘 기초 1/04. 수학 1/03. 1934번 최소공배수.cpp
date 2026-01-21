#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;

        int A = a, B = b;
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }

        cout << (A * B) / a << '\n';
    }

    return 0;
}