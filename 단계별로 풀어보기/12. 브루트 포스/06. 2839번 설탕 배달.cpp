#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min3 = n / 3 + 1;
    int min5 = n / 3 + 1;
    for (int cnt5 = min5; cnt5 >= 0; cnt5--) {
        for (int cnt3 = 0; cnt3 <= min3; cnt3++) {
            if (5 * cnt5 + 3 * cnt3 == n) {
                cout << cnt5 + cnt3;
                return 0;
            }
        }
    }
    cout << -1;
}