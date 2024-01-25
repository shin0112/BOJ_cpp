#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    vector<int> v = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6,  6,  6,  7,
                     7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    string input;
    int sum = 0;
    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        sum += v[input[i] - 'A'];
    }

    cout << sum;
    return 0;
}