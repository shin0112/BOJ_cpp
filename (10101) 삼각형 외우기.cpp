#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int a, b, c;

    cin >> a >> b >> c;
    if ((a + b + c) == 180)
        if (a == b && b == c)
            cout << "Equilateral";
        else if (a == b || b == c || c == a)
            cout << "Isosceles";
        else
            cout << "Scalene";
    else
        cout << "Error";

    return 0;
}