#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int minx = 10001, miny = 10001, maxx = -10001, maxy = -10001;
    int N, x, y;
    cin >> N;

    while (N--) {
        cin >> x >> y;
        maxx = max(maxx, x);
        maxy = max(maxy, y);
        minx = min(minx, x);
        miny = min(miny, y);
    }

    cout << (maxx - minx) * (maxy - miny);

    return 0;
}