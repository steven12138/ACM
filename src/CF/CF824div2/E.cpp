//gg wrong!!!!!!!!!!!!
#include <iostream>
#include <algorithm>
#include <vector>

void solve();

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN 1005

int h[2][MAXN];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> h[0][i];
    for (int i = 1; i <= n; i++) cin >> h[1][i];
    sort(h[0] + 1, h[0] + n + 1);
    sort(h[1] + 1, h[1] + n + 1);
    for (int i = 1; i <= n; i++) {
        int dis1 = h[0][i] + h[1][1];
        int dis2 = abs(h[0][i] - h[1][1]);
        bool f = true;
        int cnt1 = 0, cnt2 = 0;
        //check
        for (int j = 2; j <= n; j++) {
            int dis1_ = h[0][i] + h[1][j];
            int dis2_ = abs(h[0][i] - h[1][j]);
            if (dis1_ != dis1 && dis1_ != dis2 && dis2_ != dis1 && dis2_ != dis2) {
                f = false;
                break;
            }
            if (dis1_ == dis1 || dis2_ == dis1) cnt1++;
            else cnt2++;
        }

        if (f) {
            //dis=dis1
            int min_l = 0;
            if (cnt1 == n - 1) {
                vector<int> d;
                for (int j = 2; j <= n; j++) {
                    int dis1_ = h[0][i] + h[1][j];
                    int dis2_ = abs(h[0][i] - h[1][j]);
                    if (dis1_ == dis1) {
                        vector.push
                    } else if (dis2_ == dis1) {
                        if (h[0][i] < h[1][i]) {}
                        else {}
                    }
                }
            } else {}
        }
    }
    cout << "NO" << endl;
}