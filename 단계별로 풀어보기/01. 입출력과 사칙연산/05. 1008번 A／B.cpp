#include <iostream>
using namespace std;

int main() {
    double a, b, ans;

    cin >> a >> b;
    ans = a / b;

    cout.precision(10);
    cout << ans;
    return 0;
}