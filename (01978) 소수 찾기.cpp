#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, num, cnt = 0;
    cin >> N;

    while (N--) {
        cin >> num;
        bool isPrime = (num == 1) ? false : true;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cnt++;
    }

    cout << cnt;

    return 0;
}
