#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;
    int cnt = 0;
    string s;
    cin >> s;

    s = s + "  ";

    for (int i = 0; i < s.size() - 2; i++) {
        if (s[i] == 'c') {
            if (s[i + 1] == '-' || s[i + 1] == '=')
                i++;
        } else if (s[i] == 'l' || s[i] == 'n') {
            if (s[i + 1] == 'j')
                i++;
        } else if (s[i] == 'd') {
            if (s[i + 1] == '-')
                i++;
            else if (s[i + 1] == 'z' && s[i + 2] == '=')
                i += 2;
        } else if (s[i] == 's' || s[i] == 'z') {
            if (s[i + 1] == '=')
                i++;
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}