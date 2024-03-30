#include <bits/stdc++.h>
#define FASTIO                                                                 \
    ios_base::sync_with_stdio(0);                                              \
    cin.tie(0);

using namespace std;

int main() {
    FASTIO;

    int N, M;
    int cnt = 0, right = 0, left = 1, k;
    bool r = false, l = false;
    cin >> N >> M;
    queue<int> rq, lq;

    for (int i = 0; i < N; i++) {
        rq.push(i + 1);
        lq.push(N - i);
    }

    while (cin >> k) {

        while (true) {
            if (rq.front() == k) {
                rq.pop();
                break;
            } else {
                right++;
                rq.push(rq.front());
                rq.pop();
            }
        }
        while (true) {
            if (lq.front() == k) {
                lq.pop();
                break;
            } else {
                left++;
                lq.push(lq.front());
                lq.pop();
            }
        }

        cnt += min(right, left);
        right = 0;
        left = 1;
    }

    std::cout << cnt;

    return 0;
}