#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3;
    int y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int x, y;
    if (x1 - x2 == 0) x = x3;
    else if (x1 - x3 == 0) x = x2;
    else if (x2 - x3 == 0) x = x1;

    if (y1 - y2 == 0) y = y3;
    else if (y1 - y3 == 0) y = y2;
    else if (y2 - y3 == 0) y = y1;

    cout << x << ' ' << y;
    return 0;
}