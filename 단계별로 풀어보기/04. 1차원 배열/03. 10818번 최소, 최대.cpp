#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long min = 1000001;
    long long max = -1000001;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;

        if (min > num) min = num;
        if (max < num) max = num;
    }

    cout << min << ' ' << max;
    return 0;
}