#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, cnt = 2;
    cin >> N;
    while (N--) {
        cnt = cnt * 2 - 1;
    }

    cout << cnt * cnt;
    return 0;
}