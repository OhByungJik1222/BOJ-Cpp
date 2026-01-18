#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    vector<string> tails;
    for (int i = 0; i < s.size(); i++) {
        tails.push_back(s.substr(i));
    }

    sort(tails.begin(), tails.end());

    for (string tail : tails) {
        cout << tail << '\n';
    }

    return 0;
}