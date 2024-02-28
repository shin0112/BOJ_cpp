#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

bool isPrime(int n) {
    bool is_prime = true;
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main() {
    FASTIO;

    int M, N;
    int sum = 0, min = 100001;

    cin >> M >> N;

    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
            min = min < i ? min : i;
        }
    }

    if (min == 100001)
        cout << -1;
    else
        cout << sum << '\n' << min;

    return 0;
}
