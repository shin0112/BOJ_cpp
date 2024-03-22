#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int S, K;
    cin >> S >> K;

    long long q = S / K; // 몫
    long long r = S % K; // 나머지
    long long mul = 1;

    if (q) {
        for (int i = 0; i < K; i++) {
            if (r) {
                mul *= (q + 1);
                r--;
            } else {
                mul *= q;
            }
        }
    } else {
        mul *= r;
    }

    cout << mul;

    return 0;
}