#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

#define FOR(N) for (int i = 0; i < N; i++)
bool compare(int a, int b) { return a > b; }

int main() {
    FASTIO;

    int N, cnt = 0;
    cin >> N;

    vector<int> A(N, 0);
    vector<int> B(N, 0);

    FOR(N) { cin >> A[i]; }
    FOR(N) { cin >> B[i]; }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), compare);

    FOR(N) { cnt += A[i] * B[i]; }

    cout << cnt;

    return 0;
}