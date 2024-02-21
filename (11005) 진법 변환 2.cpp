#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    string output;
    int N, B, r;
    cin >> N >> B;

    while (N) {
        r = N % B;
        if (r > 9)
            output.push_back(r + 'A' - 10);
        else
            output.push_back(r + '0');

        N = N / B;
    }

    reverse(output.begin(), output.end());
    cout << output;
    return 0;
}