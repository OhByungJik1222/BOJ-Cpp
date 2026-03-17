#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int e, s, m;
    cin >> e >> s >> m;

    int tmp_e = 1;
    int tmp_s = 1;
    int tmp_m = 1;
    int ans = 1;
    while (true) {
        if (tmp_e == e && tmp_s == s && tmp_m == m)
            break;

        tmp_e++; tmp_s++; tmp_m++; ans++;
        if (tmp_e > 15) tmp_e = 1;
        if (tmp_s > 28) tmp_s = 1;
        if (tmp_m > 19) tmp_m = 1;
    }
    cout << ans;

    return 0;
}