#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int T, R;
    string S, out = "";
    cin >> T;

    for (int i = 0; i < T; i++) {
        out = "";
        cin >> R >> S;
        for (int j = 0; j < S.size(); j++) {
            for (int k = 0; k < R; k++)
                out.push_back(S[j]);
        }
        cout << out << '\n';
    }

    return 0;
}