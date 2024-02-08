#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int col, row, input;
    int maxi = -1;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> input;
            if (input > maxi) {
                maxi = input;
                col = i + 1;
                row = j + 1;
            }
        }
    }

    cout << maxi << '\n' << col << ' ' << row;

    return 0;
}