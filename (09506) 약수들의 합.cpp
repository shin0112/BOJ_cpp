#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int n;

    while (true) {
        vector<int> v, sum(1, 0);
        cin >> n;

        if (n == -1)
            break;

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                v.push_back(i);
                sum.push_back(sum.back() + i);
            }
        }

        if (sum.back() == n) {
            cout << n << " = " << v[0];
            for (int i = 1; i < v.size(); i++) {
                cout << " + " << v[i];
            }
        } else {
            cout << n << " is NOT perfect.";
        }

        cout << '\n';
    }

    return 0;
}