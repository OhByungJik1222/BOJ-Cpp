#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    string alph = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string num;
    int digit;

    cin >> num >> digit;

    int len = num.size();
    long long ans = 0;
    for (char c : num) {
        len--;
        for (int i = 0; i < digit; i++) {
            if (c == alph[i]) {
                ans += (i * pow(digit, len));
            } 
        }
    }
    cout << ans;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    int base;
    cin >> num >> base;

    long long ans = stoll(num, nullptr, base);
    cout << ans;
}