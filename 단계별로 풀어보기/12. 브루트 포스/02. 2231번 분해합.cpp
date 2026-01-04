#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        long long tmp = i;
        string s = to_string(i);
        for (char c : s) {
            tmp += c - '0';
        }
        
        if (tmp == n) {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}