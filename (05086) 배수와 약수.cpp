#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;

        if (a % b == 0)
            cout << "multiple\n";
        else if (b % a == 0)
            cout << "factor\n";
        else
            cout << "neither\n";
    }

    return 0;
}