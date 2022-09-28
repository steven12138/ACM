#include <iostream>
#include <cmath>

#define MAXN int(1e5+3)
using namespace std;

int st[MAXN][19];

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

int query(int l, int r) {
    int k = (int) log2(r - l + 1);
    return max(st[l][k], st[r - (1 << k) + 1][k]);
}

auto main() -> int {
    int n = read(), q = read();
    for (int i = 1; i <= n; i++) st[i][0] = read();
    for (int j = 1; j <= 18; j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; i++) {
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    for (int i = 1; i <= q; i++) {
        int a=read(), b=read();
        printf("%d\n", query(a, b));
    }
}