#include <iostream>
using namespace std;

int main() {
    int n;
    char num[101];
    
    cin >> n;
    cin >> num;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += num[i] - '0';
    }
    cout << ans;
    return 0;
}