#include <iostream>

void solve();

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN 55

void solve() {
    int n, a[MAXN] = {};
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
    for (int i = 1; i <= n; i++) {
        int d = sum - a[i];
        if (d % (n - 1) == 0 && d / (n - 1) == a[i]) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
