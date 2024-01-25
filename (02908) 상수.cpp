#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    string A, B, at, bt;
    cin >> A >> B;
    for (int i = A.size() - 1; i >= 0; i--) {
        at.push_back(A[i]);
        bt.push_back(B[i]);
    }

    cout << ((stoi(at) > stoi(bt)) ? at : bt);

    return 0;
}