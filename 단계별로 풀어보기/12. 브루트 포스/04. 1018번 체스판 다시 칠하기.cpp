#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string board[51];

int check1(int start_x, int start_y) {
    int cnt = 0;
    for (int x = 0; x < 8; x++) {
        string s;
        
        if (x % 2 == 0) s = "WBWBWBWB";
        else s = "BWBWBWBW";
        for (int y = 0; y < 8; y++) {
            if (board[start_x + x][start_y + y] != s[y]) cnt++;
        }
    }

    return cnt;
}

int check2(int start_x, int start_y) {
    int cnt = 0;
    for (int x = 0; x < 8; x++) {
        string s;
        
        if (x % 2 == 0) s = "BWBWBWBW";
        else s = "WBWBWBWB";
        for (int y = 0; y < 8; y++) {
            if (board[start_x + x][start_y + y] != s[y]) cnt++;
        }
    }

    return cnt;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    int ans = 64;
    for (int x = 0; x < n - 7; x++) {
        for (int y = 0; y < m - 7; y++) {
            ans = min({ans, check1(x, y), check2(x, y)});
        }
    }
    cout << ans;
    return 0;
}