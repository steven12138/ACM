#include <iostream>

#define MAXN int(5e5+3)

using namespace std;


int c[MAXN];
int n;

inline auto LowBit(int x) {
    return x & (-x);
}

auto change(int i, int d) {
    for (; i <= n; i += LowBit(i)) {
        c[i] += d;
    }
}

auto query(int i) {
    int ans = 0;
    for (; i; i -= LowBit(i)) {
        ans += c[i];
    }
    return ans;
}

auto main() -> int {
    int q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        change(i, x);
        change(i + 1, -x);
    }
    while (q--) {
        int op, x, y, k;
        cin >> op >> x;
        if (op == 1) {
            cin >> y >> k;
            change(x, k);
            change(y + 1, -k);
        } else {
            cout << (query(x)) << endl;
        }
    }
    return 0;
}