#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    string b_s = to_string(b);
    int b_1 = b_s[2] - '0';
    int b_10 = b_s[1] - '0';
    int b_100 = b_s[0] - '0';

    cout << a * b_1 << endl;
    cout << a * b_10 << endl;
    cout << a * b_100 << endl;
    cout << a * b;
    return 0;
}