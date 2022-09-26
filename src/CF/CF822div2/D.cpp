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
int64_t a[MAXN];

//gg have fun
void solve() {
    int64_t n, k, Blood;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[n];
    Blood = a[k];
}