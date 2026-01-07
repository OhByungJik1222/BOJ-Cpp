#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> ans;
    vector<int> stk;

    int next = 1;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        while (next <= num) {
            stk.push_back(next++);
            ans.push_back('+');
        }

        if (!stk.empty() && stk.back() == num) {
            stk.pop_back();
            ans.push_back('-');
        } else {
            cout << "NO";
            return 0;
        }
    }

    for (char c : ans) {
        cout << c << '\n';
    }
    
    return 0;
}