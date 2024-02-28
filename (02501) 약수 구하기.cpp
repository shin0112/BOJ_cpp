#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, K, cnt = 0, num = 0;
    bool flag = false;

    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0)
            cnt++;

        if (cnt == K) {
            num = i;
            flag = true;
            break;
        }
    }

    cout << (flag ? num : 0);

    return 0;
}