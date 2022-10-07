#include <bits/stdc++.h>

using namespace std;

void solve();

int main() {
    ios::sync_with_stdio(false);
    long long T;
    cin >> T;
    while (T--) solve();
    return 0;
}

long long get(long long n) {
    auto q = (long long) (sqrt(n));
    long long s = (q - 1) * (long long) (3);
    if (n >= q * q) s++;
    if (n >= q * (q + 1)) s++;
    if (n >= q * (q + 2)) s++;
    return s;
}

void solve() {
    long long l, r;
    cin >> l >> r;
    long long ans = get(r) - get(l - 1);
    cout << ans << endl;
}