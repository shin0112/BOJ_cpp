#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    long long N, sum = 0;
    int L, mid, left, num;

    cin >> N >> L;

    for (long long i = L; i < 101; i++) {

        mid = N / i;
        num = left = (mid - (i / 2) - 1);
        if (num < 0)
            left = num = 0;

        while (true) {
            for (int j = 0; j < i; j++, num++) {
                sum += num;
            }

            if (sum == N) {
                for (int k = 0; k < i; k++) {
                    cout << left + k << ' ';
                }
                return 0;
            }
            sum = 0;
            num = ++left;

            if (num > mid || sum > N) {
                break;
            }
        }
    }

    cout << -1;

    return 0;
}