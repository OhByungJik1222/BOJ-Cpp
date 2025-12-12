#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int c;
        int total = 0;

        cin >> c;

        int quarter = 0;
        while (c >= 25) {
            c -= 25;
            quarter++;
        }

        int dime = 0;
        while (c >= 10) {
            c -= 10;
            dime++;
        }

        int nickel = 0;
        while (c >= 5) {
            c -= 5;
            nickel++;
        }

        int penny = 0;
        while (c >= 1) {
            c--;
            penny++;
        }
    cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
    }
}