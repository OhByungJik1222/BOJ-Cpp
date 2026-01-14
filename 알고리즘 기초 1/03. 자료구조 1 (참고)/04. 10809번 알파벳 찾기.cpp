#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int size = 'z' - 'a' + 1;
    vector<int> ans(size, -1);

    int idx = 0;
    for (char c : s) {
        if (ans[c - 'a'] == -1) ans[c - 'a'] = idx;
        idx++;
    }

    for (int i = 0; i < size; i++) {
        cout << ans[i];
        if (i != size - 1) cout << ' ';
    }

    return 0;
}