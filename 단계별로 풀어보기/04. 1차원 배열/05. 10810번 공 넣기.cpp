#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int basket[101];
    for (int i = 1; i <= n; i++) {
        basket[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int start, end, num;
        cin >> start >> end >> num;

        for (int j = start; j <= end; j++) {
            basket[j] = num;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << basket[i] << ' ';
    }
    return 0;
}