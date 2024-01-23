#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, input;
    int mini = 1000001, maxi = -1000001;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> input;
        maxi = max(maxi, input);
        mini = min(mini, input);
    }

    cout << mini << ' ' << maxi << '\n';

    return 0;
}