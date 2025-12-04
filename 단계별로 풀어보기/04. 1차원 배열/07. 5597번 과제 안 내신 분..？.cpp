#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int is_in[31];
    for (int i = 1; i <= 30; i++) {
        is_in[i] = 0;
    }

    for (int i = 0; i < 28; i++) {
        int n;
        cin >> n;
        is_in[n] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (is_in[i] == 0) cout << i << '\n';
    }

    return 0;
}