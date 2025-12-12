#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a = 2;
    for (int i = 0; i < n; i++) {
        a = a + pow(2, i);
    }
    cout << pow(a, 2);
}