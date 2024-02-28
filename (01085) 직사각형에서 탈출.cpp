#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    vector<int> v = {x - 0, y - 0, w - x, h - y};
    sort(v.begin(), v.end());
    cout << v[0];

    return 0;
}
