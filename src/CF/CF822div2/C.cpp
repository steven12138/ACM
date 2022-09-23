#include <iostream>
#include <cstring>

void solve();

using namespace std;

#define int long long

auto main() -> int32_t {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN int32_t(1e6+3)
bool del[MAXN];

void solve() {
    memset(del, 0, sizeof(del));
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = "_" + s;
    int cost = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] != '0') continue;
        if (!del[i]) cost += i;
        for (int j = 2 * i; j <= n; j += i) {
            if (s[j] == '0') {
                if (!del[j]) {
                    cost += i;
                    del[j] = true;
                }
            } else break;
        }
    }
    cout << cost << endl;
}
