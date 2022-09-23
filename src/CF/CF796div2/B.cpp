#include <iostream>
#include <algorithm>
#include <cstring>

#define MAXN int(2e5+3)
#define LOG(X) for(int _=1;_<=n;_++) cout<<X[_]<<" ";cout<<endl;

void solve();

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) { solve(); }
    return 0;
}

int c[MAXN];

int getN(int x) {
    int cnt = 0;
    while (x % 2 == 0) {
        x /= 2;
        cnt++;
    }
    return cnt;
}

void solve() {
    memset(c, 0, sizeof(c));
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        c[i] = getN(x);
    }
//    LOG(a)
//    LOG(c)
    sort(c + 1, c + n + 1);
    int ans = 0;
    ans += c[1];
    for (int i = 2; i <= n; i++) {
        if (c[i] != 0) ans++;
    }
    cout << ans << endl;
}
