#include <iostream>
#include <algorithm>

#define MAXN 100005
using namespace std;


int x[MAXN] = {}, y[MAXN] = {};

auto main() -> int {
    int T;
    cin >> T;
    while (T--) {
        memset(x, 0, sizeof(x));
        memset(y, 9, sizeof(y));
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> x[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> y[i];
        }
        int c[MAXN] = {};
        for (int i = 1; i <= n; i++) {
            c[i] = y[i] - x[i];
        }
        sort(c + 1, c + n + 1);
        int l, r = n;
        int ans = 0;
        for (l = 1; l <= n && l < r; l++) {
            if (c[l] + c[r] >= 0) {
                ans++;
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}