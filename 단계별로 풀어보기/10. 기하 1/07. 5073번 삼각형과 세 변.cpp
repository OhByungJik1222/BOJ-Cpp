#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;

        if (a + b + c - max({a, b, c}) <= max({a, b, c})) cout << "Invalid\n";
        else {
            if (a == b && a == c) cout << "Equilateral\n";
            else if (a == b || a == c || b == c) cout << "Isosceles\n";
            else cout << "Scalene\n";
        }
    }
    return 0;
}