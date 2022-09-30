#include <iostream>

#define MAXN int(1e4+3)

using namespace std;

int f[MAXN];
int n;

auto init() -> void {
    for (int i = 1; i <= n; i++) {
        f[i] = i;
    }
}

auto find(int x) -> int {
    if (f[x] == x) return x;
    return f[x] = find(f[x]);
}

auto merge(int a, int b) -> void {
    int fa = find(a);
    int fb = find(b);
    f[fb] = fa;
}

auto main() -> int {
    int m;
    cin >> n >> m;
    init();
    while (m--) {
        int op;
        int x, y;
        cin >> op >> x >> y;
        if (op == 1) {
            merge(x, y);
        } else {
            cout << (find(x) == find(y) ? "Y" : "N") << endl;
        }
    }
    return 0;
}