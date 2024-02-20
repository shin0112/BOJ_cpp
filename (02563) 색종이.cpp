#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, x, y;
    vector<vector<int>> v(100, vector<int>(100, 0));
    cin >> N;

    while (N--) {
        cin >> x >> y;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                v[i + x][j + y] = 1;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == 1)
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}