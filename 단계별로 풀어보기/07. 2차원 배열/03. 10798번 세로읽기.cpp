#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s[5];
    int max_size = 0;
    for (int i = 0; i < 5; i++) {
        cin >> s[i];
        if (max_size < s[i].size()) max_size = s[i].size();
    }

    for (int j = 0; j < max_size; j++) {
        for (int k = 0; k < 5; k++) {
            if (s[k].size() <= j) continue;
            
            cout << s[k][j];
        }
    }
    return 0;
}