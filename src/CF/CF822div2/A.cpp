#include <iostream>
#include <algorithm>

void solve();

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN 305

void solve() {
    int n;
    int a[MAXN] = {};
    int c[MAXN][MAXN] = {};
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int mn = 2147483647;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int d = abs(a[i] - a[j]);
            c[i][j] = i != j ? d : 2147483647;
        }
        sort(c[i] + 1, c[i] + n + 1);
        int cost = c[i][1] + c[i][2];
        mn = min(mn, cost);
    }
    cout << mn << endl;
}
