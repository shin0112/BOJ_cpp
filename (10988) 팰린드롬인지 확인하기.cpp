#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    bool flag = true;
    string input;
    cin >> input;

    for (int i = 0; i < input.size() / 2; i++) {
        if (input[i] != input[input.size() - 1 - i])
            flag = false;
    }

    cout << flag << boolalpha;
    return 0;
}