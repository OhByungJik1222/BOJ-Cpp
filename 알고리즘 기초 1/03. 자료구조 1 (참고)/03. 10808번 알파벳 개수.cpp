#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int size = 'z' - 'a' + 1;
    int ans[size] = { 0 };
    
    for (char c : s) {
        ans[c - 'a']++;
    }

    for (int i = 0; i < size; i++) {
        cout << ans[i];

        if (i != size - 1) cout << ' ';
    }

    return 0;
}