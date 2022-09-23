#include <iostream>

#define MAXN int(1e5+3)

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
    char c = 0;
    for (int i = 1; i <= n * 2 + 1; i++) {
        string s;
        cin >> s;
        for(int j=0;j<s.length();j++) c^=s[j];
    }
    cout << c << endl;
}
