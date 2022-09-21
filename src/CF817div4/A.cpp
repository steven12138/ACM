//817 主要水水题，817怎么能不水水呢[doge]
#include <iostream>
#include <algorithm>

using namespace std;

auto main() -> int {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        string std = "Turmi";
        sort(std.begin(), std.end());
        if (s == std) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}