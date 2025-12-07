#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int canvas[101][101] = {0};

    cin >> n;
    for (int i = 0; i < n; i++) {
        int left, bottom;
        cin >> left >> bottom;
        
        for (int j = left; j < left + 10; j++) {
            for (int k = bottom; k < bottom + 10; k++) {
                canvas[j][k] = 1;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            ans += canvas[i][j];
        }
    }
    cout << ans;
    return 0;
}