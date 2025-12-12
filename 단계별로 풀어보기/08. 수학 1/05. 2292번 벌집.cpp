#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long cnt = 1;
    long long max_num = 1;
    while (n > max_num) {
        max_num += 6 * cnt;
        cnt += 1;
    }
    cout << cnt;
}