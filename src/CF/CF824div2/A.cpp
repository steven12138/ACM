#include <iostream>

void solve();

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}

void solve() {
    int n;
    cin >> n;
    int rest = n - 3;
    int t = rest / 3;
    cout << t - 1 << endl;
}