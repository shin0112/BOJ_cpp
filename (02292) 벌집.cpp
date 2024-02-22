#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, num = 1, cnt = 0;
    cin >> N;

    if (N == 1) {
        cout << 1;
        return 0;
    }

    for (int i = 0; N > num; i++) {
        num += 6 * i;
        cnt++;
    }

    cout << cnt;
    return 0;
}