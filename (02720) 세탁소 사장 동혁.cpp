#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int T, C;
    vector<int> v(4, 0);

    cin >> T;

    while (T--) {
        cin >> C;

        v[0] = C / 25;
        v[1] = C % 25 / 10;
        v[2] = C % 25 % 10 / 5;
        v[3] = C % 5;

        for (int i = 0; i < 4; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}