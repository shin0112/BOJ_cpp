#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    string input;
    vector<int> check(26, -1);

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        if (check[input[i] - 'a'] == -1)
            check[input[i] - 'a'] = i;
    }

    for (int i = 0; i < 26; i++) {
        cout << check[i] << ' ';
    }

    return 0;
}