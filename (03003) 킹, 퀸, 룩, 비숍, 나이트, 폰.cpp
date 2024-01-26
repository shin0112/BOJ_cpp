#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int input = 0;
    vector<int> correct = {1, 1, 2, 2, 2, 8}, v(6, 0);

    for (int i = 0; i < 6; i++) {
        cin >> input;
        v[i] = correct[i] - input;
        cout << v[i] << ' ';
    }

    return 0;
}