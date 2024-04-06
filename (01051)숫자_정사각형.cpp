#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    FASTIO;

    int N, M;
    cin >> N >> M;
    vector<vector<int>> v(N, vector<int>(M, 0));
    string s;

    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            v[i][j] = (int)(s[j]);
        }
    }

    int x = 0, y = 0;
    int num = v[0][0], size = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            num = v[i][j];
            y = i;
            x = j;

            while (true) {
                x++, y++;
                if (x >= M || y >= N) {
                    break;
                }

                if (v[i][x] == v[y][j] && num == v[i][x] && num == v[y][x]) {
                    size = max(size, (x - j + 1) * (x - j + 1));
                }
            }
        }
    }
    cout << size;

    return 0;
}