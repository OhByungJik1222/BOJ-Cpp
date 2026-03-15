#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int flag = 0;
int h[9];
vector<int> ans;

void dfs(int idx, int cnt, int sum) {
    if (flag) return;

    if (sum > 100) return;

    if (cnt == 7) {
        if (sum == 100) flag = 1;
        return;
    }

    for (int i = idx; i < 9; i++) {
        ans.push_back(h[i]);
        dfs(i + 1, cnt + 1, sum + h[i]);
        if (flag) return;
        ans.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 9; i++) cin >> h[i];

    dfs(0, 0, 0);
    sort(ans.begin(), ans.end());

    for (int x : ans) cout << x << '\n';

    return 0;
}