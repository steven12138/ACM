#include <iostream>

void solve();

using namespace std;

auto main() -> int {
    int T;
    cin >> T;
    while (T--) { solve(); }
    return 0;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (j == 1 || j == i ? 1 : 0) << " ";
        }
        cout << endl;
    }
}
