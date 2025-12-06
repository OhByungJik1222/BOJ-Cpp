#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, double> score_dict;
    score_dict["A+"] = 4.5;
    score_dict["A0"] = 4.0;
    score_dict["B+"] = 3.5;
    score_dict["B0"] = 3.0;
    score_dict["C+"] = 2.5;
    score_dict["C0"] = 2.0;
    score_dict["D+"] = 1.5;
    score_dict["D0"] = 1.0;
    score_dict["F"] = 0;
    
    string sub;
    double time;
    string score;

    double sum = 0;
    double time_sum = 0;
    for (int i = 0; i < 20; i++) {
        cin >> sub >> time >> score;

        if (score != "P"){
            sum += time * score_dict[score];
            time_sum += time;
        }
    }

    cout.precision(10);
    cout << sum / time_sum;
    return 0;
}