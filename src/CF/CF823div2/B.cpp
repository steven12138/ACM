#include <iostream>
#include <vector>
#include <cstring>

void solve();

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

#define MAXN int(1e5+3)
#define min(X, Y) ((X)<(Y)?(X):(Y))
#define max(X, Y) ((X)>(Y)?(X):(Y))

int a[MAXN];
int t[MAXN];
vector<int> s;


void solve() {
    memset(a, 0, sizeof(a));
    memset(t, 0, sizeof(t));
    s.clear();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> t[i];
    int mx = 0, mn = INT_MAX;
    for (int i = 1; i <= n; i++) {
        mn = min(a[i] - t[i], mn);
        mn = min(a[i] + t[i], mn);
        mx = max(a[i] + t[i], mx);
        mx = max(a[i] - t[i], mx);
    }
    int sum = mn + mx;
    cout << sum / 2;
    if(sum % 2 != 0)
        cout << ".5";
    cout << '\n';
}
