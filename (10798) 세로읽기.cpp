#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    vector<vector<char>> v(5, vector<char>(15, ' '));
    string input, answer = "";

    for (int i = 0; i < 5; i++) {
        cin >> input;
        for (int j = 0; j < input.size(); j++) {
            v[i][j] = input[j];
        }
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[j][i] == ' ')
                continue;
            answer.push_back(v[j][i]);
        }
    }

    cout << answer;
    return 0;
}