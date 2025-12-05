#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    string alph[8] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    
    cin >> word;

    int ans = 0;
    for (char c : word) {
        for (int i = 0; i < 8; i++) {
            if (alph[i].find(c) != string::npos) {
                ans += i + 3;
            }
        }
    }
    cout << ans;
    return 0;
}