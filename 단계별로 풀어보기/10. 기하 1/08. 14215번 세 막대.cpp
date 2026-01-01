#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int max_len = max({a, b, c});
    int min_len = min({a, b, c});
    int mid_len = a + b + c - max_len - min_len;

    if (min_len + mid_len <= max_len) {
        cout << (min_len + mid_len) * 2 - 1;
    } else {
        cout << (max_len + mid_len + min_len);
    }
    return 0;
}