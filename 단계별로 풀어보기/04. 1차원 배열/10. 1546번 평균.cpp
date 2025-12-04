#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float n;
    cin >> n;

    float m = 0;
    float score[1001];
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        if (m < score[i]) m = score[i];
    }

    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += score[i] / m * 100;
    }

    cout.precision(10);
    cout << sum / n;
    return 0;
}