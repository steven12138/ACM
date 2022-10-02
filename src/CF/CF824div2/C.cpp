#include <iostream>
#include <cstring>

void solve();

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN int(1e5+3)

int a[MAXN];
int mp[27];

int f[27];

void init() {
    for (int i = 1; i <= 26; i++) f[i] = i;
}

int find(int x) {
    if (f[x] == x) return x;
    return f[x] = find(f[x]);
}

void merge(int a, int b) {
    int fa = find(a);
    int fb = find(b);
    f[fa] = fb;
}

bool vis[27];
char ch[MAXN];

void solve() {
    memset(vis, 0, sizeof(vis));
    memset(mp, 0, sizeof(mp));
    memset(a, 0, sizeof(a));
    memset(ch, 0, sizeof(ch));
    int n;
    cin >> n;
    init();
    cin >> ch;
    for (int i = 1; i <= n; i++) {
        a[i] = static_cast<int>(ch[i - 1]) - 'a' + 1;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (mp[a[i]]) {
            cout << static_cast<char>(mp[a[i]] - 1 + 'a');
            continue;
        }
        for (int k = 1; k <= 26; k++) {
            if (vis[k]) continue;
            if (a[i] == k) continue;
            if (cnt == 25 || find(a[i]) != find(k)) {
                cnt++;
                mp[a[i]] = k;
                merge(a[i], k);
                vis[k] = true;
                cout << static_cast<char>(k - 1 + 'a');
                break;
            }
        }
    }
    cout << endl;
}
