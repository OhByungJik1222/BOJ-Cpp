#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string o;
    getline(cin, o);

    string ans = "";
    for (char c : o) {
        int div = 4;
        int num = c - '0';
        for (int i = 0; i < 3; i++) {
            int bin = num / div;

            if (bin == 0 && ans != "") ans.push_back(bin + '0');
            else if (bin == 1) ans.push_back(bin + '0');
            
            num %= div;
            div /= 2;
        }
    }

    if (ans == "") ans = "0";
    cout << ans;

    return 0;
}