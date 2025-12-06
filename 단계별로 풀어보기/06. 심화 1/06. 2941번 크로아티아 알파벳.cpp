#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int i = 0;
    int len = s.size();
    int ans = 0;
    while (i < len) {
        if (i != len - 1 && s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
            ans++;
            i++;
        } else if (i != len - 2 && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
            ans++;
            i += 2;
        } else if (i != len - 1 && s[i] == 'd' && s[i + 1] == '-') {
            ans++;
            i++;
        } else if (i != len - 1 && s[i] == 'l' && s[i + 1] == 'j') {
            ans++;
            i++;
        } else if (i != len - 1 && s[i] == 'n' && s[i + 1] == 'j') {
            ans++;
            i++;
        } else if (i != len - 1 && s[i] == 's' && s[i + 1] == '=') {
            ans++;
            i++;
        } else if (i != len - 1 && s[i] == 'z' && s[i + 1] == '=') {
            ans++;
            i++;
        }
        else ans++;
        i++;
    }
    cout << ans;
    return 0;
}