#include <iostream>
#include <cstring>

void solve();

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN 105
int a[MAXN];

void solve() {
    memset(a, 0, sizeof(a));
    int n, c;
    cin >> n >> c;
    int mn = 100, mx = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
        a[x]++;
    }
    int cost = 0;
    for (int i = mn; i <= mx; i++) {
        cost += (c < a[i] ? c : a[i]);
    }
    cout << cost << endl;
}
