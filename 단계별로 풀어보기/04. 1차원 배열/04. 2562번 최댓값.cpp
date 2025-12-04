#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int max_val = 0;
    int idx_max = 0;
    for (int i = 1; i <= 9; i++) {
        int val;
        cin >> val;

        if (val > max_val) {
            max_val = val;
            idx_max = i;
        }
    }
    cout << max_val << '\n' << idx_max;
    return 0;
}