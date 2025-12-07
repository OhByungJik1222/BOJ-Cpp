#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[10][10];

    int max_val = -1;
    int max_row, max_col;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (max_val < arr[i][j]) {
                max_val = arr[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }
    cout << max_val << '\n' << max_row << ' ' << max_col;
    return 0;
}