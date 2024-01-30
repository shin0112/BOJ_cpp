#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, cnt = 0;
    string s;
    cin >> N;
    cnt = N;

    while (N--) {
        vector<int> check(26, 0);
        cin >> s;
        s.push_back(' ');
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1])
                continue;
            else if (check[s[i] - 'a'] == 0)
                check[s[i] - 'a'] = 1;
            else {
                cnt--;
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}