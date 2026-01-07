#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> q;
    for (int i = 1; i <= n; i++) q.push_back(i);


    int cnt = 0;
    vector<int> ans;
    vector<int> tmp;
    while (ans.size() != n) {
        int curr;

        if (!q.empty()) {
            cnt++;
            curr = q.front();
            
            q.erase(q.begin());
            if (cnt % k == 0) {
                ans.push_back(curr);
                cnt = 0;
            } else tmp.push_back(curr);
        } else {
            q = tmp;
            tmp = { };
        }
    }

    cout << '<';
    for (int i = 0; i < n; i++) {
        cout << ans[i];
        if (i != n - 1) cout << ", ";
    }
    cout << '>';

    return 0;
}