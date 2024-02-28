#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N;
    cin >> N;

    for (int i = 2; N != 1;) {
        if (N % i == 0) {
            cout << i << '\n';
            N /= i;
        } else {
            i++;
        }
    }

    return 0;
}
