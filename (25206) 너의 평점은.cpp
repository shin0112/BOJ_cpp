#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    string sub, grade;
    float credit, sum = 0;
    int cnt = 0;

    map<string, float> m = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5},
                            {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0},
                            {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};

    for (int i = 0; i < 20; i++) {
        cin >> sub >> credit >> grade;
        if (grade == "P") {
            continue;
        }
        sum += m[grade] * credit;
        cnt += credit;
    }

    cout << sum / cnt;

    return 0;
}