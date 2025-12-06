#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        int j = 0;
        int alph[26] = {0};
        bool flag = true;
        char curr = s[0];
        for (int j = 0; j < s.size(); j++) {
            if (s[j] != curr) {
                if (alph[s[j] - 'a'] == 1) {
                    flag = false;
                    break;
                } else {
                    alph[curr - 'a'] = 1;
                    curr = s[j];
                }
            }
        }

        if (flag) ans++;
    }

    cout << ans;
    return 0;
}