#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (b + c < 60) {
        cout << a << ' ' << b + c;
    } else {
        if (a + (b + c) / 60 < 24) {
            cout << a + (b + c) / 60 << ' ' << (b + c) % 60;
        } else {
            cout << (a + (b + c) / 60) - 24 << ' ' << (b + c) % 60;
        }
    }

    return 0;
}