#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int m;
    cin >> m;

    vector<int> num_a(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> num_a[i];
    }
    reverse(num_a.begin(), num_a.end());

    long long tmp = 1;
    long long num = 0;
    for (int i = 0; i < m; i++) {
        num += num_a[i] * tmp;
        tmp *= a;
    }
    
    vector<int> num_b;
    while (num != 0) {
        num_b.push_back(num % b);
        num /= b;
    }
    reverse(num_b.begin(), num_b.end());

    for (int i = 0; i < num_b.size(); i++) {
        cout << num_b[i];
        if (i != num_b.size() - 1) cout << ' ';
    }

    return 0;
}