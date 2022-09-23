#include <iostream>

void solve();

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN int(2e5+3)
int a[MAXN];
int c[MAXN];


void solve0() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int l, r;
    l = r = k;
    int blood = a[k];
    while (l != 0 && r != n + 1) {
        if (blood + a[l] < 0 && blood + a[r] < 0) {
            cout << "NO" << endl;
            return;
        }
        if (a[l] < a[r]) {

        }
    }
}

void dfs(int u, int b) {
    b += a[u];
    if ();
    dfs(u + 1, b);
    dfs(u - 1), b;
}

void solve1() {
    memset(a, 0, sizeof(a));
    memset(c, 0, sizeof(c));
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        c[i] = c[i - 1] + a[i];
    }
    bool flag = false;

    //left
    for (int i = 1; i <= k; i++) {

    }

    //right
    for (int j = k; j <= n; j++) {

    }
}