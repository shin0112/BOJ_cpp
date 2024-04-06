#include <bits/stdc++.h>
using namespace std;

#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);                                                                \
    cout.tie(0);

int main() {
    FASTIO;
    int N;
    cin >> N;
    vector<long long> h(N + 1, 0);
    vector<vector<float>> v(N, vector<float>(N + 1, 0.0));

    if (N < 3) {
        cout << N - 1;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            v[i][j] = v[j][i] = ((h[j] - h[i]) / (float)(j - i));
        }
    }

    vector<int> count(N, 2);
    int left, right;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0 || i == N - 1) {
            count[i] = 1;
        }
        left = i - 2;
        right = i + 2;
        float maxl = v[i][left + 1], maxr = v[i][right - 1];
        for (; left >= 0; left--) {
            if (maxl > v[i][left]) {
                count[i]++;
                maxl = v[i][left];
            }
        }
        for (; right < N; right++) {
            if (maxr < v[i][right]) {
                count[i]++;
                maxr = v[i][right];
            }
        }
        cnt = max(cnt, count[i]);
    }

    cout << cnt;

    return 0;
}