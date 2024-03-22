#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}

int main() {
    FASTIO;

    int N, cnt = 0;
    cin >> N;

    vector<int> v(N, 0), num(N, 0), line(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        num[i] = i;
    }

    for (int i = 0; num.size() != 0;) {

        line[num[v[i]]] = i + 1;

        num.erase(num.begin() + v[i]);

        i++;
    }

    print(line);

    return 0;
}