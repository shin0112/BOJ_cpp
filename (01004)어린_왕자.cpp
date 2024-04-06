#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    long long T, n, x1, y1, x2, y2, cx, cy, r, start, end, cnt;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        cnt = 0;
        for (int j = 0; j < n; j++) {
            start = end = 0;
            cin >> cx >> cy >> r;

            start = pow(pow(cx - x1, 2) + pow(cy - y1, 2), 0.5) > r ? 0 : 1;
            end = pow(pow(cx - x2, 2) + pow(cy - y2, 2), 0.5) > r ? 0 : 1;

            if (start != end) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}