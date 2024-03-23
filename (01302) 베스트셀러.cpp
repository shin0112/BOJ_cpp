#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

bool compare(string a, string b) { return a < b; }
void print(vector<string> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
}

int main() {
    FASTIO;

    map<string, int> m;

    int N, maxi = 0;
    cin >> N;
    vector<vector<string>> v(N + 1);

    string book;

    for (int i = 0; i < N; i++) {
        cin >> book;
        if (m.find(book) == m.end()) {
            m[book] = 1;
        } else {
            m[book]++;
        }

        int num = m[book];
        maxi = max(num, maxi);
    }

    for (auto i = m.begin(); i != m.end(); i++) {
        if (maxi == i->second) {
            v[maxi].push_back(i->first);
        }
    }

    vector<string> many = v[maxi];
    sort(many.begin(), many.end(), compare);

    cout << many[0];

    return 0;
}
