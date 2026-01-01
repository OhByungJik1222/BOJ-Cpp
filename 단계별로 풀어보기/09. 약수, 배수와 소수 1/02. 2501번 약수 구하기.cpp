#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> remain;
    for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) {
            remain.push_back(i);
        }
    }

    if (remain.size() < k) {
        cout << 0;
    } else {
        cout << remain[k - 1];
    }
    return 0;
}