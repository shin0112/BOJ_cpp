#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    string N;
    int B, num = 0;
    cin >> N >> B;

    for (int i = 0; i < N.size(); i++) {
        if ('A' <= N[i] && N[i] <= 'Z')
            num += (N[i] - 'A' + 10) * pow(B, N.size() - i - 1);
        else
            num += (N[i] - '0') * pow(B, N.size() - i - 1);
    }

    cout << num;

    return 0;
}