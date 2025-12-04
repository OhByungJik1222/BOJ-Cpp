#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int basket[101];
    for (int i = 1; i <= n; i++) {
        basket[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int b1, b2;
        cin >> b1 >> b2;

        int ball1 = basket[b1];
        int ball2 = basket[b2];

        basket[b2] = ball1;
        basket[b1] = ball2;
    }

    for (int i = 1; i <= n; i++) {
        cout << basket[i] << ' ';
    }
    return 0;
}