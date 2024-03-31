#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, M;
    int pack, single;
    int mp = 1001, ms = 1001;
    int money = 0;

    cin >> N >> M;
    while (M--) {
        cin >> pack >> single;
        mp = min(mp, pack);
        ms = min(ms, single);
    }

    if (mp > ms * 6) {
        cout << ms * N;
        return 0;
    }

    money += mp * (N / 6);
    money += min((N % 6) * ms, mp);

    cout << money;

    return 0;
}