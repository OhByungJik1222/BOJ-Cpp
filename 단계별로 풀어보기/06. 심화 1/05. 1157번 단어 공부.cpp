#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    long long cnt[26] = {0};
    for (char c : s) {
        cnt[tolower(c) - 'a']++;
    }

    int idx = -1;
    int idxmax = -1;
    for (int i = 0; i < 26; i++) {
        if (idxmax < cnt[i]) {
            idx = i;
            idxmax = cnt[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        if (idx != i && idxmax == cnt[i]) {
            cout << '?';
            return 0;
        }
    }

    cout << (char)(idx + 'A');
    return 0;
}