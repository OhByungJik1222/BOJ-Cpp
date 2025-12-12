#include <iostream>
using namespace std;

int main() {
    long long a, b, v;
    cin >> a >> b >> v;

    long long ans;
    if ((v - b) % (a - b) == 0) {
        ans = (v - b) / (a - b);
    } else {
        ans = (v - b) / (a - b) + 1;
    }

    cout << ans;
    return 0;
}