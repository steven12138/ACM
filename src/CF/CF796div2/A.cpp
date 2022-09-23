#include <iostream>


using namespace std;

inline int LowBit(int x) {
    return x & (-x);
}

auto solve() -> void {
    int x;
    cin >> x;
    if (x == 1) {
        cout << 3 << endl;
        return;
    }
    if (LowBit(x) == x) {
        cout << x + 1 << endl;
        return;
    }
    cout << LowBit(x) << endl;
}

auto main() -> int {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}