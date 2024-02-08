#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int N, M, input;
    cin >> N >> M;
    vector<vector<int>> v(N, vector<int>(M, 0)), sum(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cin >> v[i][j];
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> input;
            sum[i][j] = v[i][j] + input;
        }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << sum[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}