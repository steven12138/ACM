#include <iostream>
#include <cmath>


using namespace std;

void solve();


long long bin_sqrt(long long x) {
    long long l = 1;
    long long r = x;
    while (r - l > 1) {
        long long mid = (l + r) / 2;
        if (mid * mid > x) r = mid;
        else l = mid;
    }
    return l;
}

int main() {

    ios::sync_with_stdio(false);
    long long T;
    cin >> T;
    while (T--) solve();
    return 0;
}


long long get(long long n) {
    auto q = bin_sqrt(n);
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