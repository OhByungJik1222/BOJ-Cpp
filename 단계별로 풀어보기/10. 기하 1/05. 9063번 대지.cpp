#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    int x_min = 10001, y_min = 10001;
    int x_max = -10001, y_max = -10001;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        x_min = min(x_min, x);
        x_max = max(x_max, x);
        y_min = min(y_min, y);
        y_max = max(y_max, y);
        
    }

    cout << (x_max - x_min) * (y_max - y_min) << '\n';
    return 0;
}