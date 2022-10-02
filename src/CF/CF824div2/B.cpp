#include <iostream>

void solve();

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN 105

int a[MAXN];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int max_limit = a[1] * 2;
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] < max_limit) continue;
        cnt += (a[i] - 1) / (a[1] * 2 - 1);
    }
    cout << cnt << endl;
}