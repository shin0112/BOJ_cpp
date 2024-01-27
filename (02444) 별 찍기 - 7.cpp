#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int N;
    cin >> N;

    // my solution
    for (int i = 1; i <= N; i++) {
        for (int j = N - i; j > 0; j--)
            cout << ' ';
        for (int j = 0; j < i * 2 - 1; j++)
            cout << '*';
        cout << '\n';
    }

    for (int i = N - 1; i > 0; i--) {
        for (int j = N - i; j > 0; j--)
            cout << ' ';
        for (int j = 0; j < i * 2 - 1; j++)
            cout << '*';
        cout << '\n';
    }

    // other solution
    for (int i = -N + 1; i < N; i++) {
        for (int j = abs(i); j > 0; j--)
            cout << ' ';
        for (int j = 0; j < (N - abs(i)) * 2 - 1; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}