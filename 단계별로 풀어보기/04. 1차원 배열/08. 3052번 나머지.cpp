#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rest[43];
    for (int i = 0; i < 43; i++) {
        rest[i] = 0;
    }

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        rest[num % 42] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < 43; i++) {
        if (rest[i] == 1) cnt++;
    }
    cout << cnt;
    return 0;
}