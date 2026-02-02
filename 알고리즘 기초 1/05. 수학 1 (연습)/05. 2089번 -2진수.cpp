#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    
    if (n == 0) {
        cout << 0;
    } else {
        string ans;
        while (n != 0) {
            int res;
            if (n % 2 == 0) res = 0;
            else res = 1;

            n = (-1 * (n - res)) / 2;
            ans.push_back(res + '0');
        }

        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    
    return 0;
}