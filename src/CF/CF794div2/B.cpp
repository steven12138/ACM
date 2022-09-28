#include <iostream>
#include <cstring>

void solve();

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN int(1e5+3)

int a[MAXN];

void solve() {
    memset(a, 0, sizeof(a));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i - 1] > a[i]) {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
}
