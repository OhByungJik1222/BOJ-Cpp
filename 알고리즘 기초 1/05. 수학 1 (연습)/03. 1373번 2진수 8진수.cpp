#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string bin;
    getline(cin, bin);

    int len = bin.length();

    reverse(bin.begin(), bin.end());

    for (int i = 0; i < (3 - (len % 3)) % 3; i++) {
        bin.push_back('0');
    }
    
    string ans;
    for (int i = 0; i < bin.length(); i += 3) {
        int n = 1;
        int tmp = 0;
        for (int j = 0; j < 3; j++) {
            tmp += (bin[i + j] - '0') * n;
            n *= 2;
        }
        ans.push_back('0' + tmp);
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}