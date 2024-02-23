#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int X, num = 1, cnt = 1;
    cin >> X;

    for (; num + cnt <= X; cnt++)
        num += cnt;

    int x, y;
    if (cnt % 2 == 0) {
        for (x = 1, y = cnt; num != X; x++, y--, num++)
            ;
    } else {
        for (x = cnt, y = 1; num != X; x--, y++, num++)
            ;
    }

    cout << x << '/' << y;

    return 0;
}