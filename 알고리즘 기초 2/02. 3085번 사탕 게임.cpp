#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
string candy[50];

int count() {
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        int tmp = 1;
        for (int j = 1; j < n; j++) {
            if (candy[i][j] == candy[i][j - 1]) tmp++;
            else tmp = 1;
            cnt = max(cnt, tmp);
        }

        tmp = 1;
        for (int j = 1; j < n; j++) {
            if (candy[j][i] == candy[j - 1][i]) tmp++;
            else tmp = 1;
            cnt = max(cnt, tmp);
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    
    for (int i = 0; i < n; i++) 
        cin >> candy[i];

    int ans = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j + 1 < n && candy[i][j] != candy[i][j + 1]) {
                swap(candy[i][j], candy[i][j + 1]);
                ans = max(ans, count());
                swap(candy[i][j], candy[i][j + 1]);
            }

            if (i + 1 < n && (candy[i][j] != candy[i + 1][j])) {
                swap(candy[i][j], candy[i + 1][j]);
                ans = max(ans, count());
                swap(candy[i][j], candy[i + 1][j]);
            }
        }
    }
    cout << ans;

    return 0;
}