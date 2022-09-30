#include <cstring>
#include <iostream>
#include <algorithm>

#define MAXN int(1e5+4)

void solve();

using namespace std;

inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - 48;
        ch = getchar();
    }
    return x * f;
}

int main() {
    ios::sync_with_stdio(false);
    int T = read();
    while (T--) solve();
    return 0;
}

int a[MAXN];
int b[MAXN];

void solve() {
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    int n = read();
    for (int i = 1; i <= n; i++) a[i] = read();
    if (n % 2) {
        printf("NO\n");
        return;
    }
    sort(a + 1, a + n + 1);
    int m = n / 2;
//    cout << m << endl;
    for (int i = 2; i <= m; i++) {
//        cout << i << " " << i + m - 1 << endl;
        if (a[i] == a[i + m - 1]) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
    for (int i = 1; i <= m; i++)
        printf("%d %d ", a[i], a[i + m]);

    printf("\n");
}
