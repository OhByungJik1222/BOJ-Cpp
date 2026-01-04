#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 666;
    int cnt = 0;
    while (true) {
        string tmp = to_string(ans);
        for (int i = 0; i < tmp.length() - 2; i++) {
            if (tmp[i] == '6' && tmp[i + 1] == '6' && tmp[i + 2] == '6') {
                cnt++;
                break;
            }
        }

        if (cnt == n) {
            cout << ans;
            return 0;
        }
        ans++;
    }
}