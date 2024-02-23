#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int A, B, V;
    cin >> A >> B >> V;

    int day = (V - A) / (A - B);
    if (day * (A - B) + A >= V)
        day++;
    else {
        day += 2;
    }

    cout << day;
    return 0;
}