#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long num = 1;
    long long sum = 1;
    while (sum < x) {
        num++;
        sum += num;
    }

    long long n, m;
    if (num % 2 == 0) {
        n = 1;
        m = num;

        for (int i = 0; i < x - (sum - num) - 1; i++) {
            n++; m--;
        }
    } else {
        n = num;
        m = 1;

        for (int i = 0; i < x - (sum - num) - 1; i++) {
            n--; m++;
        }
    }
    cout << n << '/' << m;
    return 0;
}