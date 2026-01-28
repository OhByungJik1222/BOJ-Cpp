#include <iostream>
#include <algorithm>
using namespace std;

int count2(long long num) {
    int cnt2 = 0;
    while (num != 0) {
        num /= 2;
        cnt2 += num;
    }
    return cnt2;
}

int count5(long long num) {
    int cnt5 = 0;
    while (num != 0) {
        num /= 5;
        cnt5 += num;
    }
    return cnt5;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    int cnt2 = count2(n) - count2(m) - count2(n - m);
    int cnt5 = count5(n) - count5(m) - count5(n - m);

    cout << min(cnt2, cnt5);

    return 0;
}