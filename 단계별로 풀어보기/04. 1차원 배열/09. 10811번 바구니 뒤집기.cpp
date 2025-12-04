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
        int start, end;
        cin >> start >> end;
        for (int j = 0; j < end - start; j++) {
            int tmp1, tmp2;
            
            if (start + j > end - j) break;

            tmp1 = basket[start + j];
            tmp2 = basket[end - j];

            basket[end - j] = tmp1;
            basket[start + j] = tmp2;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << basket[i] << ' ';
    }
    return 0;
}